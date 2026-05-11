    #include <iostream>
    using namespace std;
    int main(){
        cout<<"Ingresa un numero: ";
        int numero, suma = 0;
        cin >> numero;
        cin >> suma;
    while (numero != 0){
        cout<<"Ingresa un numero: ";
        cin >> numero;
        suma += numero; 
    }
    cout<<"La suma total es: "<<suma<<endl;



    return 0;
    }