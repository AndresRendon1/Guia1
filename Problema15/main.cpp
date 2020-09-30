#include <iostream>

using namespace std;
int N=0;
int cont=0;
int aux = 1;
int suma=aux;
int aux2=2;
int i = 0;
int main()
{
    cout << "ingrese el tamanio del cuadrado: ";
    cin>>N;
    cout<<aux<<endl;
    while(i<N-3){
        while(cont<4){
            aux = aux+aux2;
            cout<<aux<<endl;
            suma = suma+aux;
            cont++;
        }
        i++;
        aux2 = aux2+2;
        cont=0;
    }
    cout<<"En una espiral de "<<N<<"X"<<N<<" la suma es: "<<suma<<endl;

    return 0;
}
