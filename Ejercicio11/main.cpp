#include <iostream>

using namespace std;
int N=0;
int Multiplicacion=0;
int main()
{
    cout << "Ingrese el numero: ";
    cin>>N;
    for(int i=1;i<11;i++){
        Multiplicacion = i*N;
        /*if(i>10){
            break;
        }
        else{

        }*/
        cout<<i,cout<<"x",cout<<N,cout<<"= ",cout<<Multiplicacion,cout<<endl;
    }
    return 0;
}
