// Given two inter values, the programs finds out if a number is less, equal or greater than the second number
import std;

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Please enter two integers\n";
    std::cin >> a >> b;
    if (a < b) // condition
        // 1st alternative (if condition is true)
        std::print("{} is less than {}\n", a, b);

    else if (a > b)
        // 2nd alternative (if condition is false)
        std::print("{} is greater than to {}\n", a, b);
    else if (a == b)
        std::print("{} is equal to {}\n", a, b);
    else
        std::print("Invalid input\n");
}

// Try
// This program has a bug: it compares a string to an integer. Modify it so that comparisons are performed using integer values ONLY.
