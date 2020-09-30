#include <iostream>

using namespace std;
int dia = 0;
int mes = 0;
int main()
{
    cout << "Ingrese la clave del mes: ";
    cin>>mes;
    cout<<"ingrese el dia del mes: ";
    cin>>dia;
    if(dia == 29 && mes == 2){
        cout<<dia<<"/"<<mes<<"es valida en año bisiesto"<<endl;
    }
    else if(mes>12){
        cout<<"el mes: "<<mes<<"no es valido"<<endl;
    }
    else if(mes == 1 && dia<=31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 2 && dia<=28){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 3 && dia<=31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 4 && dia<=30){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if (mes == 5 && dia<=31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 6 && dia<=30){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 7 && dia<=31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if(mes == 8 && dia<=31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if (mes == 9 && dia <=30){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if (mes == 10 && dia <= 31){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if (mes == 11 && dia <= 30){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else if (mes == 12 && dia <= 30){
        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
    }
    else{
        cout<<dia<<"/"<<mes<<" no es una fecha valida"<<endl;
    }
    return 0;
}
