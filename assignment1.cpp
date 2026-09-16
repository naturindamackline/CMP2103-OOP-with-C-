
#include <iostream>
using namespace std;

// Function prototypes declared
bool isValid(long long number);
int sumOfDoubleEvenPlace(long long number);
int getDigit(int number);
int sumOfOddPlace(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);

int main() {
    long long number;

    cout << "Enter a credit card number as a long integer: ";
    cin >> number;

    if (isValid(number))
        cout << number << " is valid" << endl;
    else
        cout << number << " is invalid" << endl;

    return 0;
}

// Return true if the card number entered is valid

bool isValid(long long number) {
    int numDigits = getSize(number);

    // Must be 13 to 16 digits
    if (numDigits < 13 || numDigits > 16)
        return false;

    // Must start with 4 (Visa), 5 (MasterCard), 37 (Amex), or 6 (Discover)

    bool validPrefix = prefixMatched(number, 4)  ||
                        prefixMatched(number, 5)  ||
                        prefixMatched(number, 37) ||
                        prefixMatched(number, 6);

    if (!validPrefix)
        return false;

    // Luhn check

    int sum = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number);
    return (sum % 10 == 0);
}

// Step 1 & 2: double every second digit from the right, collapse to single digit, sum them

int sumOfDoubleEvenPlace(long long number) {
    int sum = 0;
    long long n = number / 10; // move to the digit second from the right

    while (n > 0) {
        int lastDigit = static_cast<int>(n % 10);
        sum += getDigit(lastDigit * 2);
        n /= 100; // skip to the next "even place" digit
    }

    return sum;
}

// Return the number itself if single digit, else sum of its two digits

int getDigit(int number) {
    if (number < 10)
        return number;
    else
        return (number / 10) + (number % 10);
}

// Step 3: sum digits in odd places from the right

int sumOfOddPlace(long long number) {
    int sum = 0;
    long long n = number;

    while (n > 0) {
        int lastDigit = static_cast<int>(n % 10);
        sum += lastDigit;
        n /= 100; // skip to the next "odd place" digit
    }

    return sum;
}

// Return true if d is a prefix of number

bool prefixMatched(long long number, int d) {
    int k = getSize(d);
    return getPrefix(number, k) == d;
}

// Return the number of digits in d
int getSize(long long d) {
    int numDigits = 0;

    if (d == 0)
        return 1;

    while (d != 0) {
        d /= 10;
        numDigits++;
    }

    return numDigits;
}

// Return the first k digits of number (or number itself if it has fewer than k digits)

long long getPrefix(long long number, int k) {
    int numDigits = getSize(number);

    if (numDigits < k)
        return number;

    long long result = number;
    for (int i = 0; i < numDigits - k; i++)
        result /= 10;

    return result;
}