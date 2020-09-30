#include <iostream>

using namespace std;
int numero1 = 0;
int numero2 = 0;
int numero3 = 0;
int contador1 = 0;
int suma1=0;
int resultado1 = 0;
int suma2=0;
int resultado2=0;
int x=0;
int main()
{
    cout<<"Ingrese el primer numero: ";cin>>numero1;
    cout<<"Ingrese el segundo numero: ";cin>>numero2;
    cout<<"Ingrese el tercer numero: ";cin>>numero3;
    for(contador1=1;resultado1+numero1<numero3;contador1++){
        resultado1=contador1*numero1;
        suma1=suma1+resultado1;
        cout <<resultado1<<"+";
    }
    for(contador1=1,suma2=0;resultado2+numero2<numero3;contador1++){
        resultado2=contador1*numero2;
        cout<<resultado2<<"+";
        if (resultado2%numero1!=0){
            suma2=suma2+resultado2;
        }
    }
    x=suma1+suma2;
    cout<<"0 = "<<x<<endl;
    return 0;
}
