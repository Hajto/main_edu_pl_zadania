// http://main.edu.pl/pl/archive/ilocamp/2010/wie

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
inline T read(std::istream& stream) {
    T temp;
    stream >> temp;
    return temp;
}

int main() {
    const unsigned liczbaSchodow = read<unsigned>(std::cin),
                liczba_mieszkancow = read<unsigned>(std::cin);
    std::vector<unsigned> schody;
    schody.reserve(liczbaSchodow); //utworz vector o rozmiarze n
    unsigned najwyzszySchod = 0;
    for (unsigned i=0; i<liczbaSchodow; ++i) {
        unsigned schodek = read<unsigned>(std::cin);
        // robimy pseudo uporz¹dkowany materia³ do binsearch-a
        schody.push_back(
            (schodek > najwyzszySchod)?
            (najwyzszySchod = schodek):
            (najwyzszySchod)
        );
    }
    for (unsigned i=0; i<liczba_mieszkancow; ++i)
        std::cout << std::lower_bound(
                         schody.begin(),
                         schody.end(),
                         read<unsigned>(std::cin)
                      ) - schody.begin()
                  << ' ';
                  //Binsearch dolnej wzglednej wysokosci, szukamy pierwszego schoda, na ktory sie nie wespnie
}
