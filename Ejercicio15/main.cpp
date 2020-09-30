#include <iostream>

using namespace std;
int N=0;
int suma=0;
int main()
{
    cout << "Ingrese un Numero (0 para salir): ";
    cin>>N;
    suma = suma+N;
    while(N!=0){
        cout<<N;
        cout << "Ingrese un Numero (0 para salir): ";
        cin>>N;
        suma = suma+N;
        if(N==0){
            break;
        }

    }
    cout<<suma,cout<<endl;
    return 0;
}
