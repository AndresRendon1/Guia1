#include <iostream>

using namespace std;
int N=0;
int cont_div = 0;
int i=2;
int main()
{
    cout << "Ingrese un numero: ";
    cin>>N;
    if(N==1){
        cout<<"el numero no es primo"<<endl;
    }
    if(N==2){
        cout<<"el numero es primo"<<endl;
    }
    while(i<N){
        if(N%i==0){
            cout<<"no es primo"<<endl;
            break;
        }
        else{
            cont_div++;
        }
        i++;
    }
    if(cont_div==(N-2)){
        cout<<"es primo"<<endl;
    }
    return 0;
}
