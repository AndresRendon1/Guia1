#include <iostream>

using namespace std;
int cant1 = 0;
int cant2 = 0;
int horas1 = 0;
int horas2 = 0;
int minutos1 = 0;
int minutos2 = 0;
int sumahoras=0;
int sumamin = 0;
int main()
{
    cout << "Ingrese la cantidad 1: ";
    cin>>cant1;
    horas1 = cant1/100;
    minutos1 = cant1%100;
    if(minutos1>59){
        cout<<horas1<<minutos1<<" no es un tiempo valido"<<endl;
    }
    else{
    cout<<"Ingrese la cantidad 2: ";
    cin>>cant2;
    horas2 = cant2/100;
    minutos2 = cant2%100;
    }
    if(minutos2>59){
        cout<<horas2<<minutos2<<" no es un tiempo valido"<<endl;
    }
    else{
    sumahoras = horas1+horas2;
    sumamin = minutos1+minutos2;
    if(sumahoras>23){
        sumahoras=0;
    }
    if(sumamin>59){
        sumahoras = sumahoras+1;
        sumamin = sumamin-59;
    }

    cout<<sumahoras<<" : "<<sumamin<<endl;
    }
    return 0;
}
