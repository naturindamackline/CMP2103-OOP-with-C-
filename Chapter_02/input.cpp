// read and write a first name
import std;
int main()
{
    std::cout << "Please enter your first name (followed by 'enter'):\n";
    std::string first_name; // first_name is a var iable of type string
    std::cin >> first_name; // read characters into first_name
    std::cout << "Hello, " << first_name << "!\n";

    return 0;
}