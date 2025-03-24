#include "../inc/Harl.hpp"

std::string	ft_toLower(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (std::isupper(str[i]))
			str[i] = std::tolower(str[i]);
	}
	return (str);
}

int check_level(std::string argv)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
        if (levels[i] == argv)
            return (i);
    return (-1);        
}

void harl_filter(std::string argv, Harl & h)
{
    switch(check_level(argv))
    {
        case 0:
            h.complain("debug");
        case 1:
            h.complain("info");
        case 2:
            h.complain("warning");
        case 3:
            h.complain("error");
            break;
        default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main (int argc, char **av)
{
    Harl harl;

    if (argc != 2)
	{
		std::cout << "ERROR: Wrong arguments' number" << std::endl;
		std::cout << "usage: <debug level>" << std::endl;
		return (1);
	}
	harl_filter(ft_toLower(av[1]), harl);
	return (0);
}