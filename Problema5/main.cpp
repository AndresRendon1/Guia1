#include <iostream>

using namespace std;
int N = 0;
int asterisco = 0;
int espacio = 0;
int main()
{
    cout << "Ingrese un numero: ";
    cin>>N;
    for(int i = 1;i<=N;i++){
        for(espacio=i;espacio<=N-1;espacio++){
            cout<<" ";
        }
        for(asterisco = 1;asterisco<=(2*i)-1;asterisco++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = N-1;i>=1;i--){
        for(espacio=i;espacio<=N-1;espacio++){
            cout<<" ";
        }
        for(asterisco = 1;asterisco<=(2*i)-1;asterisco++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
