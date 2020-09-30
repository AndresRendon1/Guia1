#include <iostream>

using namespace std;
int cant_seg=0;
int horas=0;
int minutos = 0;
int seg = 0;
int main()
{
    cout << "ingrese la cantidad de segundos: (debe ser un numero entero)";
    cin>>cant_seg;
    if(cant_seg%3600==0){
        horas=cant_seg/3600;
    }
    else{
        horas=cant_seg/3600;
        cant_seg=cant_seg%3600;
        if(cant_seg%60==0){
            minutos=cant_seg/60;
        }
        else{
            minutos=cant_seg/60;
            cant_seg=cant_seg%60;
            seg=cant_seg;
        }
    }
    cout<<"la cantidad de segundos ingresada es equivalente a: "<<horas<<":H "<<minutos<<":M "<<seg<<":S "<<endl;

    return 0;
}
