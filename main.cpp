#include <iostream>
#include <cstring>
#include <fstream>

int n, dimensions;

int main(int argc, char *argv[]) {

    // odczytanie argumentów

    for(int i = 0; i < argc; i++) {
        if(strcmp(argv[i], "-i") == 0) {
            std::string file_name = argv[++i];
            std::ifstream file(file_name);

            if(file) {
                file >> n;
                file >> dimensions;
            }

            // odczyt punktów do vectora
        }

        if(strcmp(argv[i], "-o") == 0) {
            std::string file_name = argv[++i];
            std::ofstream file(file_name);

            // logika odpowiedzialna za output
        }
    }

    return 0;
}
