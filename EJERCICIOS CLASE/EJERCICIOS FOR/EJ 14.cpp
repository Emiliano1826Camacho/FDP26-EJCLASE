#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero para que te mostremos el numero a la inversa: " << endl;
    cin >> n;

    for (int i = n; i > 0; i = i / 10) {
        int digito = i % 10;  
        cout << digito;     
    }

    cout << endl;
    return 0;
}