#include <iostream>

using namespace std;
int N=0;
int suma=0;
int contador=0;
int main()
{
    cout << "Ingrese el numero: " << endl;
    cin>>N;
    while(contador<=N){
        suma = suma+contador;
        contador +=1;
    }
    cout<<"La suma de los numeros anteriores a N=",cout<<N,cout<<" ",cout<<"es: ",cout<<suma,cout<<endl;
    return 0;
}
