#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

std::string ft_replace(std::string haystack, std::string needle, std::string str)
{
    std::size_t index;

    index = haystack.find(needle);
    while (index != std::string::npos)
    {
        haystack.erase(index, needle.length());
        haystack.insert(index, str);
        index = haystack.find(needle, index + str.length());
    }
    return (haystack);
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "ERROR: Wrong arguments" << std::endl;
        std::cout << "Expected input: <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string newFile;
    std::ofstream outputFile;
    std::fstream inputFile;

    if (s1.empty())
    {
        std::cout << "ERROR: string 1 is empty" << std::endl;
        return(0);
    }
    newFile = std::string(argv[1]) + ".replace";
    inputFile.open(argv[1], std::ios::in);
    if (inputFile.is_open())
    {
        outputFile.open(newFile, std::ios::out);
        if (outputFile.is_open())
        {
            std::string line;
            while (std::getline(inputFile, line))
                outputFile << ft_replace(line, s1, s2) << std::endl;
            outputFile.close();
        }
        else
            std::cout << "ERROR: File not created: " << newFile << std::endl;
        inputFile.close();
    }
    else
        std::cout << "ERROR: Couldn't open file: " << argv[1] << std::endl;
    return (0);
}