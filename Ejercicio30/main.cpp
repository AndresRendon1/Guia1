#include <iostream>
#include<cstdlib>
using namespace std;
int numero1 =0;
int numero2 =0;
int contador1=0;
int main()
{
    numero1= 0+rand()%(100);
    cout <<"Adivine el numero : ";cin>>numero2;
    while (numero1!=numero2){
        contador1=contador1+1;
        if (numero1>numero2){
            cout <<"El numero es mayor : ";cin>>numero2;cout<<endl;
        }
        else if (numero1<numero2){
            cout <<"El numero es menor : ";cin>>numero2;cout<<endl;
        }
    }
    cout <<"El numero adivinado es "<<numero2<<" y tardo "<<++contador1<<" de intentos"<<endl;
    //break;
    return 0;
}
