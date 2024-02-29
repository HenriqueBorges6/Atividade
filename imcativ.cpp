
#include <iostream>
using namespace std;

string imc(float altura, float massa) {
    float valor_imc = massa / (altura * altura);
    if ( valor_imc < 17 ){
        return "Muito abaixo do peso";
    }
    else if (valor_imc < 18.5) {
        return "Abaico do peso";
    }
    else if (valor_imc <25){
        return "Peso normal";
    }
    else if (valor_imc < 30){
        return "Acima do peso";
    }
    else if (valor_imc < 35){
        return "Obesidade";
    }
    else if (valor_imc < 40){
        return "Obesidade severa";
    }
    else {
        return "Obesidade Morbida";
    }
}

int main()
{

    float altura; float massa;

    cout << "Digite sua altura: "; cin >> altura;

    cout << "Digite sua massa: "; cin >> massa;

    string fun_imc = imc(altura, massa); cout << fun_imc;
    return 0;
}

