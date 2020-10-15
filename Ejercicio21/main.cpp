#include <iostream>

using namespace std;
char C=0;
int main()
{
    cout << "ingrese caracter: ";
    cin>>C;
    cout<<"letra original: ",cout<<C<<endl;
    int asciivalue = C;
    if(asciivalue<=91){
        C+=32;
    }
    else if(asciivalue>=97){
        C-=32;
    }
    cout<<"letra convertida: ",cout<<C<<endl;
    return 0;
}
