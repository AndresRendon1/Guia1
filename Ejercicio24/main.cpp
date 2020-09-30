#include <iostream>

using namespace std;
int N=0;
int main()
{
    cout << "ingrese el tamanio del cuadrado: ";
    cin>>N;
    for(int i=0;i<N;i++){//este for imprime la linea superior
        cout<<"+";
    }
    cout<<endl;
    for(int i=0;i<N-2;i++){//for para el centro del cuadrado
        cout<<"+";
        for(int j=0;j<N-2;j++){//for para imprimir los espacios
            cout<<" ";
        }
        cout<<"+\n";
    }
    for(int i=0;i<N;i++){//este for imprime la linea inferior
        cout<<"+";
        }
    cout<<endl;
    return 0;
}
