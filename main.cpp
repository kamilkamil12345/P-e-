#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout << "Jak masz na imie?" << endl;    cin >> imie;

    int dlugosc = imie.length();
    cout << "Dlugosc imienia wynosi: " << dlugosc << endl;

    if (imie[dlugosc-1] == 'a')     {cout << "Kobieta" << endl;}
    else                            {cout << "Mezczyzna" << endl;}


    return 0;
}
