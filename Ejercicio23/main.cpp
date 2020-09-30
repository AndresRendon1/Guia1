#include <iostream>

using namespace std;
int N1=0,N2=0,resto=0,MCM=0,MCD=0,auxiliar=0;
int main()
{
    cout << "Ingrese el primer numero: ";
    cin>>N1;
    cout << "Ingrese el segundo numero: ";
    cin>>N2;
    MCD = N1;
    auxiliar  = N2;
    //Maximo comun divisor (MCD)
    do{
        resto = MCD % auxiliar;
        MCD = auxiliar;
        auxiliar = resto;
    }while(resto!=0);
    //MCM
    MCM=N1*N2/MCD;
    cout<<"el MCM entre "<<N1<<" y "<<N2<<" Es: "<<MCM<<endl;
    return 0;
}
