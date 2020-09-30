#include <iostream>

using namespace std;
int N=0;
int factorial = 1;
int main()
{
    cout << "Ingrese el numero: " << endl;
    cin>>N;
    for(int contador = 1;contador<=N;contador++){
        factorial = factorial*contador;
    }
    cout<<"el factorial de N=",cout<<N,cout<<" ",cout<<"Es: ",cout<<" ",cout<<factorial,cout<<endl;
    return 0;
}
