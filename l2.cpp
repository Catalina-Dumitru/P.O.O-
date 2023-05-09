#include "pch.h"
#include "pch.h"
#include <iostream>
using namespace System; //pentru Visual C++/CLI
using namespace std;
struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};
//Clasa este pers si este o structura care defineste datele si comportamentul
//obiectelor
class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    //Vom folosi 2 moetode cu acelasi unme cu cel al clasei, adica Pers
    //o metoda cu params si una fara params
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    //Returneaza valoarea atributului VS al obiectului curent.
    char* arata_nume() { return this->nume; }

};
int main()
{
    int numar_persoane;
    cout << "Introduceti numarul de persoane din grup: ";
    cin >> numar_persoane;

    Persoana* persoane = new Persoana[numar_persoane];

    for (int i = 0; i < numar_persoane; i++)
    {
        cout << "Introduceti numele persoanei " << i + 1 << ": ";
        cin >> persoane[i].nume;
        cout << "Introduceti prenumele persoanei " << i + 1 << ": ";
        cin >> persoane[i].prenume;
        cout << "Introduceti varsta persoanei " << i + 1 << ": ";
        cin >> persoane[i].vs;
    }

    cout << endl << "Datele introduse sunt: " << endl;
    for (int i = 0; i < numar_persoane; i++)
    {
        cout << persoane[i].nume << "\t" << persoane[i].prenume << "\t" << persoane[i].vs << endl;
    }

    Pers p2(20, "Ionescu", "George");
    Pers* p3 = new Pers(21, "Ionescu", "Adina");
    cout << p2.arata_nume() << "\t" << p2.arata_vs() << endl;
    cout << p3->arata_nume() << "\t" << p3->arata_vs() << endl;

    delete[] persoane;
    Console::ReadKey();
    return 0;
}
