#include <iostream>

using namespace std;
int N1=0;
int N2=0;
int N3=0;
int main()
{
    cout << "Ingrese el valor del lado 1: ";
    cin>>N1;
    cout << "Ingrese el valor del lado 2: ";
    cin>>N2;
    cout << "Ingrese el valor del lado 3: ";
    cin>>N3;
    if (N1+N2>N3 &&  N1+N3>N2 && N2+N3>N1){
        if (N1==N2 && N1==N3 && N2==N3){
            cout <<"Se forma un triangulo equilatero"<<endl;
        }
        else if(N1*N1+N2*N2==N3*N3){
            cout<<"Se forma un triangulo rectangulo"<<endl;
        }
        else if(N1==N2 && N2!=N3){
            cout<<"Se forma un triangulo isosceles"<<endl;
            }
        else if(N1!=N2 && N1!=N3 && N2&&N3){
            cout<<"se forma un triangulo escaleno"<<endl;
        }
    }
    else {
        cout<<"Los valores ingresados no forma un triangulo"<<endl;
        }
    return 0;
}
