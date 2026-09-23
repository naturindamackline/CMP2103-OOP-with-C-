
Every credit card has a number that distinguishes it from all other cards. This number is used to identify the card and can also be checked to determine whether it is valid. The validation method described here is based on the algorithm created by IBM engineer Peter Hans Luhn.

Most credit card numbers contain 16 digits, although they can have between 13 and 19 digits. The first digits also identify the card network: Visa numbers begin with 4, MasterCard numbers with 5, American Express numbers with 37, and Discover numbers with 6.

The Luhn check is performed using the following steps:
1. Starting from the right, double every second digit while moving toward the left. If the doubled value has two digits, add those digits together to produce one digit.
2. Add all the values obtained from the doubled digits.
3. Add the digits in the odd-numbered positions, counting from the rightmost digit.
4. Add the totals from Steps 2 and 3.
5. If the final total is divisible by 10, the card number is valid. Otherwise, it is invalid.

The program in the file creditcard_solution.cpp carries out this process using the following functions:
1. int getSize(long long d): This function counts the digits in a number by repeatedly dividing it by 10. It also handles the special case in which the input is 0. The function returns the number of digits.
2. int getDigit(int number): This function produces a single digit from a number. It is useful when doubling a digit produces a two-digit result. In that situation, the tens and units digits are added together.
3. int sumOfOddPlace(long long number): This function adds the digits found in the odd positions, beginning with position 1 at the far-right digit.
4. int sumOfDoubleEvenPlace(long long number): This function finds the digits in the even positions, doubles them, uses getDigit() to reduce the results to single digits, and adds those results.
5. long long getPrefix(long long number, int k): This function extracts and returns the first k digits of the card number.
6. bool prefixMatched(long long number, int d): This function checks whether the card number begins with the specified prefix d. It uses getSize() to find the prefix length and getPrefix() to obtain the prefix.
7. bool isValid(long long number): This function brings all the validation checks together. It checks the length, calculates the Luhn total, and verifies the card prefix. If any check fails, the function returns false.

In the main() function, the program receives the card number from the user and passes it to isValid().

The program displays one of the following results:
The number 4567... is valid

or

The number 4567... is invalid 

This program demonstrates how functions can be used together, including functions that call other functions.


