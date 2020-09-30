#include <iostream>

using namespace std;
int operaciones = 0;
int N1 = 0;
int N2 = 0;
int main()
{
    cout << "Ingrese 1. para realizar la operacion suma" << endl,cout<<"Ingrese 2. para realizar la resta"<<endl; cout << "Ingrese 3. para realizar la operacion multiplicacion" << endl;cout << "Ingrese 4. para realizar la operacion division" << endl;
    cin>>operaciones;
    if(operaciones==1){
        cout<<"Ingrese el primer numero: "<<endl;
        cin>>N1;
        cout<<"Ingrese el segundo numero: "<<endl;
        cin>>N2;
        cout<<N1<<"+"<<N2<<" = "<<N1+N2<<endl;
    }
    else if(operaciones==2){
        cout<<"Ingrese el primer numero: "<<endl;
        cin>>N1;
        cout<<"Ingrese el segundo numero: "<<endl;
        cin>>N2;
        cout<<N1<<"-"<<N2<<" = "<<N1-N2<<endl;
    }
    else if(operaciones==3){
        cout<<"Ingrese el primer numero: "<<endl;
        cin>>N1;
        cout<<"Ingrese el segundo numero: "<<endl;
        cin>>N2;
        cout<<N1<<"*"<<N2<<" = "<<N1*N2<<endl;
    }
    else if(operaciones==4){
        cout<<"Ingrese el primer numero: "<<endl;
        cin>>N1;
        cout<<"Ingrese el segundo numero: "<<endl;
        cin>>N2;
        cout<<N1<<"/"<<N2<<" = "<<N1/N2<<endl;
    }
    return 0;
}
