#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "This is the memory address of the string variable: " << &str << std::endl;
    std::cout << "This is the memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "This is the memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
    return (0);
}