#include <iostream>
using namespace std;

string quantdays(int year){
    if ((year % 400) == 0 )
    {
        return "Bissexto";
    }
    else if ((year%4) == 0 && (year%100) !=0)
    {
        return "Bissexto";
    }
    else
    {
        return "Nao Bissexto";
    }
}

int main()
{
    int year;
    cout << "Verifique se o ano e bissexto(digite o ano): " ; cin>> year;
    string resultado = quantdays(year) ; cout << resultado;

    return 0;
}