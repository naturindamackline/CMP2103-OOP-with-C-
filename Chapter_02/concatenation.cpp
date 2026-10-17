// Program takes first name and last name and returns a greeting message.

import std;

int main() // read first and second name
{
    std::cout << "Please enter your first and second names\n";
    string first;
    string second;
    std::cin >> first >> second;             // read two strings
    string name = first + ' ' + second; // concatenate strings
    std::cout << "Hello, " << name << '\n';

    // return 0;
}

