#ifndef GRA_H
#define GRA_H
#include <stdlib.h>
#include <ctime>

class Gra
{
    public:
        Gra(int B);                 //konstruktor, należy podać liczbę bomb
        virtual ~Gra();
        void Zresetuj(int L);       //resetuje klase, należy podać liczbę pól
        bool Wygrana();             //liczy różnicę miedzy liczbą nieodkrytych pól a bombami,
                                    //zwraca true gdy różnica równa jest 0
        void Zmniejsz(){LPol--;};
        void ZmniejszF(){Flagi--;};
        void ZwiekszF(){Flagi++;};
        void SetStanGry(int n){StanGry = n;};
        int GetLiczby(int n){return Liczby[n];};
        int GetStanGry(){return StanGry;};
        int GetFlagi(){return Flagi;};
    protected:

    private:
        int Bomby;      //ilość bomb
        int Flagi;      //ilość dostępnych flag
        int LPol;       //liczba nieodkrytych pól
        int *Liczby;    //tablica dynamiczna przechowująca numery wylosowanych bomb
        int StanGry;    //0 - nierozpoczety, 1 - w trakcie, 2 - zakonczony

};

#endif // GRA_H
