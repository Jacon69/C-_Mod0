#include <iostream>  // Para usar std::cout y std::endl
#include <string>    // Para usar std::string
#include <cctype>    // Para usar std::toupper

class Megaphone {
public:
	// Constructor
	Megaphone() {}

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

int main(int argc, char **argv) {
    Megaphone megaphone;
    megaphone.shout(argc, argv);  // Llamar al método de la clase
    return 0;
}
