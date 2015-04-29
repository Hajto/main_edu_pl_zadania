#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//http://main.edu.pl/pl/archive/ilocamp/2010/odc

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
    const unsigned n = read<unsigned>(std::cin);

    int counter = 0, pop = gibInteger(), top = 0;
    for(unsigned i = 0; i < n - 1; i++){
        int temp = gibInteger();
        if(temp <= pop){
            counter += pop - temp;
        } else {
            if(counter > top)
                top = counter;
            counter = 0;
                //std::cout<<top<< " counter "<<counter<<std::endl;
        }
        pop = temp;
        //std::cout<< "poprzednia: " <<pop<< " teraz: "<< temp << " counter: "<< counter <<std::endl;
    }
    if(counter > top)
        top = counter;
    //std::cout<<top<< " counter "<<counter<<std::endl;

    std::cout<<top<<std::endl;
    //printf("%d",top);
}
