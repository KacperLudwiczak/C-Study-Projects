#include <iostream>

using namespace std;
string imie; int liczba;

int main()
{
    cout << "Podaj imie:";
    cin >> imie;
    cout << "Podaaj dodatnia liczbe calkowita";
    cin >> liczba;

    for ( int i= 1; i<=liczba; i++)
    {
        cout<<i<<"."<<imie<<endl;
    }
    return 0;
}
