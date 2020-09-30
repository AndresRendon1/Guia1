#include <iostream>

using namespace std;
int N=0;
int potencia = 1;
int main()
{
    cout << "Ingresa un numero: " ;
    cin>>N;
    for(int i=1;i<6;i++){
        potencia = potencia*N;
        if(N==5){
            break;
        }
        cout<<N,cout<<"^",cout<<i,cout<<"= ",cout<<potencia,cout<<endl;
    }
    return 0;
}
