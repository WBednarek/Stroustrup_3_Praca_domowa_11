#include "../std_lib_facilities.h"
#include<vector>


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

int ile_masz_monet(string nominal_monety)
{
    int liczba_monet = 0;
    cout <<"Ile masz " << nominal_monety + "ek" << endl;
    cin >> liczba_monet;
    cout <<"Masz " << liczba_monet << " " << nominal_monety + gramatyka_groszowa(liczba_monet) << endl;


    if(nominal_monety == "jednogrosz�w")
    {
        liczba_monet = liczba_monet;
    }
    else if(nominal_monety == "dwugrosz�w")
    {
        liczba_monet *= 2;
    }
    else if(nominal_monety == "pieciogroszow")
    {
        liczba_monet *= 5;
    }
    else if(nominal_monety == "dziesieciogrosz�w")
    {
        liczba_monet *= 10;
    }
    else if(nominal_monety == "dwudziestogrosz�w")
    {
        liczba_monet *= 20;
    }
    else if(nominal_monety == "piedziesiaciogwosz�w")
    {
        liczba_monet *= 50;
    }
    else if (nominal_monety == "z�ot�wek")
    {
        liczba_monet *= 100;
    }
    else
    {
        error("Nieznany nomina� monet");
    }

    return liczba_monet;
}


int main()
{
    system("chcp 1250");
    int suma_groszy = 0;


    string nominaly[] = {"jednogrosz�w", "dwugrosz�w", "pieciogroszow", "dziesieciogrosz�w", "dwudziestogrosz�w", "piedziesiaciogwosz�w", "z�ot�wek" };
    vector<string> nominaly_monet(nominaly, nominaly + sizeof(nominaly)/ sizeof(nominaly[0]));

    for(unsigned int i = 0; i < nominaly_monet.size(); ++i)
    {
        suma_groszy += ile_masz_monet(nominaly_monet[i]);
    }

    cout <<"Warto�c wszystkich twoich monet: " << suma_groszy << " groszy" << endl;
    double suma_wszystkich_monet_zlote = suma_groszy/100.0;
    cout <<"Czyli: " << suma_wszystkich_monet_zlote << " z�otego" << endl;


    return 0;
}
