#include <iostream>

using namespace std;
int N=0;
float pi=3.1416;
float area=0;
float perimetro=0;
int main()
{
    cout << "Ingrese el radio N del circulo: " << endl;
    cin>>N;
    perimetro = 2*pi*N;
    area = pi*(N*N);
    cout<<"el perimetro es: ",cout<<" ",cout<<perimetro,cout<<endl,cout<<"el area es: ",cout<<" ",cout<<area,cout<<endl;
    return 0;
}
