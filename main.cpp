#include <iostream>

using namespace std;

int main()
{

       double medida;

       cout << "Digite a medida da glicose: ";
       cin >> medida;

       if (medida <= 100.0) {
           cout << "Classificacao: normal" << endl;
       }
       else if (medida > 100.0 && medida <= 140.0) {
           cout << "Classificacao: elevado" << endl;
       }
       else { cout << "Classificacao: diabetes" << endl; }



    return 0;
}
