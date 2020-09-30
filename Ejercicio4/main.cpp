#include <iostream>

using namespace std;
int A=0;
int B=0;
int main()
{
    cout << "Ingrese el primer numero: " << endl;
    cin>>A;
    cout << "Ingrese el segundo numero: " << endl;
    cin>>B;
    if(A<B){
        cout<<"el menor numero que ha ingresado es: ",cout<<A,cout<<endl;
    }
    else{
        cout<<"el menor numero que ha ingresado es: ",cout<<B,cout<<endl;
    }
    return 0;
}
