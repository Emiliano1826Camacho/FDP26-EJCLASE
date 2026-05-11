#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Ingresa un numero N: ";
    cin >> N;

    int suma = 0;
    int i = 1;

    while (i <= N) {
        if (i % 2 == 0) {
            suma += i;
        }
        i++;
    }

    cout << "La suma de los numeros pares desde 1 hasta " << N << " es: " << suma <<endl;
    return 0;
}
