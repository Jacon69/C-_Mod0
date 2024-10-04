#include <string>    // Para usar std::string
#include <iostream>  // Para usar std::cout y std::endl

class PhoneBook {
public:
	// Constructor
	PhoneBook() {}

	// Función principal para procesar y convertir a mayúsculas
	void shout(int argc, char **argv) {
		if (argc == 1) {
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		} else {
			for (int i = 1; i < argc; i++) {
				std::string str = argv[i]; // Usar std::string en lugar de arrays de caracteres
				for (size_t j = 0; j < str.length(); j++) {
					std::cout << (char)std::toupper(str[j]);
				}
			}
			std::cout << std::endl;  // Nueva línea al final
		}
	}
};