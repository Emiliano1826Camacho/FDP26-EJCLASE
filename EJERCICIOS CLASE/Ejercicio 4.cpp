#include <iostream>
using namespace std;
int main(){

    int opcion;
    while (opcion != 0) {
    cout<<"Elige una de las siguientes opciones: "<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"1. Comer en la pea"<<endl;
    cout<<"2. Comer en la casa"<<endl;
    cout<<"3. Comer en el Charlie Boy"<<endl;
    cout<<"4. Comer en Mc Donalds"<<endl;
    cin >> opcion;
        switch (opcion) {
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            case 1:
                cout << "Has elegido comer en la pea." << endl;
                break;
            case 2:
                cout << "Has elegido comer en la casa." << endl;
                break;
            case 3:
                cout << "Has elegido comer en el Charlie Boy." << endl;
                break;
            case 4:
                cout << "Has elegido comer en Mc Donalds." << endl;
                break;
        }
    }

return 0;
}