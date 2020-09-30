#include <iostream>

using namespace std;
char caracter = 0;
int main()
{
    cout << "Ingrese el caracter: ";
    cin>>caracter;
    int asciivalue = caracter;
    if(asciivalue == 65 || asciivalue == 69 || asciivalue == 73 || asciivalue == 79 || asciivalue == 85 || asciivalue == 97 || asciivalue == 101 || asciivalue == 105 || asciivalue == 111 || asciivalue == 117){
        cout<<caracter<<" es una vocal"<<endl;
    }
    else if((asciivalue>65&&asciivalue<69)||(asciivalue>69&&asciivalue<73)||(asciivalue>73&&asciivalue<79)||(asciivalue>79&&asciivalue<85)||(asciivalue>85&&asciivalue<97)||(asciivalue>97&&asciivalue<101)||(asciivalue>101&&asciivalue<105)||(asciivalue>105&&asciivalue<111)||(asciivalue>111&&asciivalue<117)||(asciivalue>117&&asciivalue<123)){
        cout<<caracter<<" es una consonante"<<endl;
    }
    else{
        cout<<caracter<<" no es una letra"<<endl;
    }
    return 0;
}
