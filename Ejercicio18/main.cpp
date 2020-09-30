#include <iostream>

using namespace std;
int N=0;
bool cuadrado=false;
int main()
{
    cout << "ingrese numero: ";
    cin>>N;
    for(int i=1;i<N;i++){
        if(i*i==N){
            cuadrado = true;
        }
    }
    if(cuadrado==true){
        cout<<"es un cuadrado perfecto"<<endl;
    }
    else{
        cout<<"no es un cuadrado perfecto"<<endl;
    }

    return 0;
}
