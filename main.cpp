#include "../std_lib_facilities.h"


string gramatyka_groszowa(int liczba)
{
    string koncowka_nazwy = " ";

    if(liczba < 0)
    {
        error ("Ujemna ilo�� z�otych");
    }
    else if (liczba == 1)
    {
        koncowka_nazwy = "k�";
    }
    else if(liczba % 100 == 12 || liczba % 100 == 13 || liczba % 100 == 14)
    {
        koncowka_nazwy = "ek";
    }
    else if(liczba % 10 == 2 || liczba % 10 == 3 || liczba % 10 == 4)
    {
        koncowka_nazwy = "ki";
    }
    else
    {
        koncowka_nazwy = "ek";
    }


    return koncowka_nazwy;
}


int main()
{
    system("chcp 1250");
    int jedogoszowki, dwugoszowki, pieciogowszowki,
    dziesieciogroszowki, dwudziestogroszowki,
    piedziesiaciogwoszowki, zlotowki;
    cout <<"Ile masz jednogrosz�wek?" << endl;
    while(cin >> jedogoszowki)
    {
       cout <<"Masz " << jedogoszowki << " jednogroszow" + gramatyka_groszowa(jedogoszowki) << endl;
    }


    /*
    cout <<" Ile masz dwugoszowkek?" << endl;
     cin >> dwugoszowki;
    cout <<" Ile masz dziesieciogroszowek?" << endl;
    cin >> pieciogowszowki;
    cout <<" Ile masz dwudziestogroszowek?" << endl;
    cin >> dziesieciogroszowki;
    cout <<" Ile masz piedziesiaciogwoszowek?" << endl;
    cin >>  piedziesiaciogwoszowki;
    cout <<" Ile masz z�ot�wek?" << endl;
    cin >> zlotowki;
*/


    return 0;
}
