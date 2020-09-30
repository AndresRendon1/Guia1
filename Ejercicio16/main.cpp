#include <iostream>

using namespace std;
int N=0;
int suma = 0;
float prom = 0;
int conter = 0;
int main()
{
    cout << "ingrese numero: (0 para salir): ";
    cin>>N;
    conter = conter+1;
    suma = suma+N;
    while(N!=0){
        cout << "ingrese numero: (0 para salir): ";
        cin>>N;
        conter = conter+1;
        suma = suma+N;
        if(N==0){
            prom = float(suma)/(conter-1);
            cout<<prom<<endl;
            break;
        }
    }
    return 0;
}
