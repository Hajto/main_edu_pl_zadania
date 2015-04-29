#include<iostream>
#include<algorithm>
#include<vector>

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

int main(){
    const unsigned n = gibInteger();
    bool magicFlag = true;

    std::vector<unsigned> liczby;
    liczby.reserve(n);

    for(unsigned i = 0; i < n; i++)
        liczby.push_back(gibInteger());

    std::sort(liczby.begin(),liczby.end());

    for(unsigned i = 0; i < n; i++)
        if(liczby.at(i) != i+1){
            magicFlag = false;
            break;
        }

    if(magicFlag)
        printf("TAK");
    else
        printf("NIE");
}
