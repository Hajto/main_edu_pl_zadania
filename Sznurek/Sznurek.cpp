#include<iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//http://main.edu.pl/pl/user.phtml?op=showtask&task=SZN&con=SERWY2010

template <typename T>
inline T read(std::istream& stream) {
    T temp;
    stream >> temp;
    return temp;
}
//Brzydkie ale zwraca i daje, nie chce mi sie bawiæ z mapowaniem typów do stringów...
int gibInteger(){
    int temp;
    scanf("%d",&temp);
    return temp;
}

main(){
        const unsigned n = read<unsigned>(std::cin), w = read<unsigned>(std::cin);
        int suma = 0, wynik = 0;

        std::vector<unsigned> tab;
        tab.reserve(n);

        for(int i = 0; i < n; i++){
            tab.push_back(gibInteger());
                if(suma < w){
                        suma += tab[i];
                } else if (suma >= w){
                    suma = tab[i];
                    wynik++;
                }
        }
        if(suma >= w){
             wynik++;
        }
        printf("%d", wynik);
        //std::cout<<wynik<<std::endl;
}
