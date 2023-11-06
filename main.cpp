#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

int n, dimensions;

//TODO: zamienić vectora na array'a!!!
std::vector<std::vector<double>> points;

int main(int argc, char *argv[]) {

    // odczytanie argumentów
    for(int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "-i") == 0) {
            std::ifstream file(argv[++i]);

            if(file) {
                file >> n;
                file >> dimensions;

                while (!file.eof()) {
                    std::vector<double> temp_point_row;
                    double point;
                    for (int j = 0; j < dimensions; j++) {
                        file >> point;
                        temp_point_row.push_back(point);
                    }
                    points.push_back(temp_point_row);
                    temp_point_row.clear();
                }
            } else {
                std::cerr << "Nie mozna odczytac pliku wejsciowego!" << std::endl;
            }
        }

        if (strcmp(argv[i], "-o") == 0) {
            std::ofstream file(argv[++i]);

            if(file) {
                file << "TEST";
            } else {
                std::cerr << "Nie mozna odczytac pliku wyjsciowego!" << std::endl;
            }
        }
    }

    return 0;
}
