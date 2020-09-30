#include <iostream>

using namespace std;
long long int N=0;
int contador = 0;
int main()
{
    cout << "Ingrese el numero: ";
    cin>>N;
    while(N!=0){
       N = N/10;
       contador++;
    }
    cout<<"el numero tiene: "<<contador<<" digitos"<<endl;

    return 0;
}
