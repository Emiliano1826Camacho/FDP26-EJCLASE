#include <iostream>
using namespace std;
int main(){
    int contador;
    cout<<"Ingresa un numero: ";
    cin>> contador;
    do{
        cout<<"Contador en do-while: "<<contador<<endl;
        contador--;
    } while (contador >=0);
    cout<<"Esa fue la cuenta regresiva"<<endl;
    


return 0;
}