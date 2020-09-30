#include <iostream>

using namespace std;
int N=0;
long long int cad=0;
int cont=0;

int main()
{
    cout << "Ingrese un numero: ";
    cin>>N;
    cout<<"semilla: "<<N<<endl;
    while(N>1){
        if(N%2==0){
            cad=N/2;
            N = cad;
        }
        else{
            cad = (3*N)+1;
            N = cad;
        }
    cout<<cad<<",";
    }
    cout<<endl;
    return 0;
}
