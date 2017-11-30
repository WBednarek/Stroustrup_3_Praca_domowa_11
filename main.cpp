#include "../std_lib_facilities.h"


string gramatyka_groszowa(int liczba)
{
    string koncowka_nazwy = " ";

    if(liczba < 0)
    {
        error ("Ujemna iloœæ z³otych");
    }
    else if (liczba == 1)
    {
        koncowka_nazwy = "kê";
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

    /*
    while(cin >> jedogoszowki)
    {
       cout <<"Masz " << jedogoszowki << " jednogroszow" + gramatyka_groszowa(jedogoszowki) << endl;
    }
*/

    cout <<"Ile masz jednogroszówek?" << endl;
    cin >> jedogoszowki;
    cout <<"Masz " << jedogoszowki << " jednogroszow" + gramatyka_groszowa(jedogoszowki) << endl;

    cout <<"Ile masz dwugoszowkek?" << endl;
     cin >> dwugoszowki;
     cout <<"Masz " << dwugoszowki << " dwugroszow" + gramatyka_groszowa(dwugoszowki) << endl;

    cout <<"Ile masz dziesieciogroszowek?" << endl;
    cin >> pieciogowszowki;
    cout <<"Masz " << pieciogowszowki<< " pieciogowszow" + gramatyka_groszowa(pieciogowszowki) << endl;

    cout <<"Ile masz dwudziestogroszowek?" << endl;
    cin >> dziesieciogroszowki;
    cout <<"Masz " << dziesieciogroszowki << " dziesieciogroszow" + gramatyka_groszowa(dziesieciogroszowki) << endl;

     cout <<"Ile masz dwudziestogroszowek?" << endl;
    cin >> dwudziestogroszowki;
    cout <<"Masz " << dwudziestogroszowki << " dwudziestogroszow" + gramatyka_groszowa(dwudziestogroszowki) << endl;

    cout <<"Ile masz piedziesiaciogwoszowek?" << endl;
    cin >>  piedziesiaciogwoszowki;
    cout <<"Masz " << piedziesiaciogwoszowki << " piedziesiaciogwoszow" + gramatyka_groszowa(piedziesiaciogwoszowki) << endl;

    cout <<"Ile masz z³otówek?" << endl;
    cin >> zlotowki;
    cout <<"Masz " << zlotowki << " z³otów" + gramatyka_groszowa(zlotowki) << endl;

    int suma_groszy = jedogoszowki + dwugoszowki + dziesieciogroszowki + dwudziestogroszowki + piedziesiaciogwoszowki + (zlotowki*100);

    cout <<"Wartoœc wszystkich twoich monet: " << suma_groszy << " groszy" << endl;
    double suma_wszystkich_monet_zlote = suma_groszy/100.0;
    cout <<"Czyli: " << suma_wszystkich_monet_zlote << " z³otego" << endl;



    return 0;
}
