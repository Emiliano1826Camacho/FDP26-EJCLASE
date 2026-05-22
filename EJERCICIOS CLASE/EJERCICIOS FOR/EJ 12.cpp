#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
    cout<<"Pon el numero que quieres que sea la base: "<<endl;
    cin>>a;
    cout<<"Pon el exponente al que lo deseas elevar: "<<endl;
    cin>>b;
    for (int i = 1; i <= b; i++)
    {
        cout<<a<<" ^ "<<i<<" = "<<a*i<<endl;
    }
    

    return 0;
}