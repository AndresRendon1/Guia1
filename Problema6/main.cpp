#include <iostream>

using namespace std;
int N = 0;
float sumatoria = 1;
float factorial = 1;
int main()
{
    cout <<"ingrese un numero: ";
    cin>>N;
    for(float i = 1;i<=N-1;i++){
        factorial = factorial*i;
        float div = 1/float(factorial);
        sumatoria = sumatoria+div;
    }
    cout<<"el valor de euler como sumatoria de "<< N<<" Terminos es: "<<sumatoria<<endl;
    return 0;
}
