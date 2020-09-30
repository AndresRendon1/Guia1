#include <iostream>

using namespace std;
int N = 0;
int rest = 0;
int Ninv= 0;
int main()
{
    cout << "Ingrese un Numero: ";
    cin>>N;
    while(N>0){
        rest = N%10;
        N = N/10;
        Ninv = Ninv*10+rest;
    }
    cout<<"el numero invertido es : "<<Ninv<<endl;
    if(N==Ninv){
        cout<<"el numero es palindromo"<<endl;
    }
    else{
        cout<<"el numero no es palindromo"<<endl;
    }
    return 0;
}
