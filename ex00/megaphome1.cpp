#include <iostream>
#include <string>
#include <cctype>

class Megaphone 
{
public:
	//Contructor
	Megaphone() {}
	//Metodos-función
	void    shout(int argc, char*argv[])
	{
		if (argc == 1)
		{
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		}
		else	
		{
			for(int i = 0; i < argc; i++)
			{
				std::string str = argv[i];
				for (int j=0; j < str.length();j++)
				{
					std::cout << (char)std::toupper(str[j]);
				}
			}
			std::cout << std::endl;
		}
	}
};

int	main(int argc, char *argv[])
{
	Megaphone megaphone;
	megaphone.shout(argc, argv);
	return (0);
}