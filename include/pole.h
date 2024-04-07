#ifndef POLE_H
#define POLE_H


class pole
{
    public:
        pole();
        virtual ~pole();
        int GetWartosc(){return wartosc;};
        int GetNumer(){return numer;};
        int GetZajete(){return zajete;};
        void SetWartosc(int n){wartosc = n;};
        void SetNumer(int n){numer = n;};
        void SetZajete(int z){zajete = z;};
        void ZwiekszWartosc(){wartosc++;};

    protected:

    private:
        int wartosc;        //0-9 liczby, >=9 bomba
        int numer;          //liczba równa id
        int zajete;         //0 - nieodkryte, 1 - odkryte, 2 - zajete przez flagę
};

#endif // POLE_H
