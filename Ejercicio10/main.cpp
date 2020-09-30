#include <iostream>

using namespace std;
int N=0;
int multiplo = 0;
int contador = 1;
int main()
{
    cout << "Ingrese el numero: ";
    cin>>N;
    for(contador=1;multiplo<100;contador++){
        multiplo = contador*N;
        if(multiplo>=100){
            break;
        }
        else{
        cout<<multiplo,cout<<endl;
        }

    }

    return 0;
}
