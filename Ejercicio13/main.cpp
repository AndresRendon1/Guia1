#include <iostream>

using namespace std;
int N=0;
int i = 1;
int main()
{
    cout << "Ingresa Numero: ";
    cin>>N;
    while(i<N+1){
        int divisores = N%i;
        if(divisores==0){
            cout<<i,cout<<endl;
        }
        i+=1;
    }


    return 0;
}
