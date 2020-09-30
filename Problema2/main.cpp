#include <iostream>

using namespace std;
int B50= 50000;
int B20 = 20000;
int B10 = 10000;
int B5 = 5000;
int B2 = 2000;
int B1 = 1000;
int M500 = 500;
int M200 = 200;
int M100 = 100;
int M50 = 50;
float cantidad = 0;
float resto = 0;
int contador = 0;
int main()
{
    cout << "Ingrese la cantidad: ";
    cin>>cantidad;
    while(cantidad>=B50){
        cantidad = cantidad-B50;
        contador++;

    }
    cout<<"cantidad de Billetes de 50000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=B20){
        cantidad = cantidad-B20;
        contador++;

    }
    cout<<"cantidad de Billetes de 20000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=B10){
        cantidad = cantidad-B10;
        contador++;

    }
    cout<<"cantidad de Billetes de 10000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=B5){
        cantidad =  cantidad-B5;
        contador++;

    }
    cout<<"cantidad de Billetes de 5000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=B2){
        cantidad = cantidad - B2;
        contador++;

    }
    cout<<"cantidad de Billetes de 2000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=B1){
        cantidad =  cantidad - B1;
        contador++;

    }
    cout<<"cantidad de Billetes de 1000 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=M500){
        cantidad = cantidad-M500;
        contador++;

    }
    cout<<"cantidad de Monedas de 500 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=M200){
        cantidad = cantidad-M200;
        contador++;

    }
    cout<<"cantidad de Monedas de 200 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=M100){
        cantidad = cantidad-M100;
        contador++;

    }
    cout<<"cantidad de Monedas de 100 = "<<contador<<endl;
    contador = 0;
    while(cantidad>=M50){
        cantidad = cantidad-M50;
        contador++;

    }
    cout<<"cantidad de Monedas de 50 = "<<contador<<endl;
    contador = 0;
    resto = cantidad;
    cout<<"Faltan: "<<resto<<" $"<<endl;
    return 0;
}
