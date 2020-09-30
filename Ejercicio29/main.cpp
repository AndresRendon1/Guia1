#include <iostream>

using namespace std;
char desicion=0;
int inferior = 0;
int superior = 101;
int mitad = 0;
int B = 0;
int main()
{
    cout << mitad << endl;
    cout<<"adivine? (ingresa = en caso afirmativo): ";
    cin>>desicion;
    if(desicion=='='){
        cout<<"lo logre"<<endl;
    }
    while(desicion!='='){
        mitad = (inferior+superior)/2;
        cout<<mitad<<endl;
        cout<<"adivine? (ingresa = en caso afirmativo o > , < o = para continuar)";
        cin>>desicion;
       if(desicion=='='){
           cout<<"lo logre"<<endl;
           break;
       }
       if(desicion=='<'){
           superior = 100;
           superior = mitad;
           mitad = (inferior+superior)/2;
       }
       if(desicion=='>'){
           superior = 101;
           inferior = mitad;
           mitad = (inferior+superior)/2;
        }
    }
    return 0;
}
