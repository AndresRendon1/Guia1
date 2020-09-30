#include <iostream>

using namespace std;
int N = 0;
float fraccion = 1;
float acumulador = 0;
int main()
{
    cout << "Ingrese un numero: ";
    cin>>N;
    for(int den = 1,cont=0;cont < N;den+=2,cont++){
        fraccion = 1/(float)den;
        //cout<<"1/"<<den<<"= "<<fraccion<<endl;
        if(cont%2==0){
            acumulador+= fraccion;
        }
        else{
            acumulador-= fraccion;
        }
        //cout<<den<<endl;
    }
    float numeropi= 4 * acumulador;
    cout<<"el calculo de pi como la suma de "<< N <<" terminos es: "<<numeropi<<endl;
    return 0;
}
