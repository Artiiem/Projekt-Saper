#include "Gra.h"

Gra::Gra(int B){
    srand(time(0));
    Bomby = B;
    Liczby = new int[B];
}

Gra::~Gra()
{
    delete []Liczby;
}

void Gra::Zresetuj(int L){
    StanGry = 0;
    Flagi = Bomby;
    LPol = L;
    int i = 0;
    int j = 0;
    while(i<Bomby){ // losowanie liczb równej ilośći bomb bez powtórzeń
        Liczby[i] = rand()%(LPol-1);
        while(j<i){
           if(Liczby[i] == Liczby[j])
                i--;
            j++;
        }
        i++;
        j=0;
    }
}

bool Gra::Wygrana(){
    if(LPol-Bomby == 0)
        return true;
    return false;
}
