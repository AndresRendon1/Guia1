#include <iostream>

using namespace std;
int A=0;
int B=0;
int contador;
int potencia = 1;
int main()
{
    cout << "Ingrese el primer numero: " << endl;
    cin>>A;
    cout << "Ingrese el segundo numero: " << endl;
    cin>>B;
    for(contador=0;contador<B;contador++){
        potencia = potencia * A ;
    }
    cout<<"La potencia de A^B es: ",cout<<potencia,cout<<endl;
    return 0;
}
