#include <iostream>

using namespace std;
int N=0;
int mayor = 0;
int main()
{
    cout << "Ingrese el numero: ";
    cin>>N;
    mayor = N;
    while(N!=0){
        cout << "Ingrese el numero: ";
        cin>>N;
        if(N>mayor){
            mayor = N;
        }
        if(N==0){
            cout<<"el mayor numero es: ",cout<<mayor,cout<<endl;
            break;
        }
    }
    return 0;
}
