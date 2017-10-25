#include <iostream>
#include "Software.h"

using namespace std;

int main()
{
    int resp=1;
    string n;
    int resp2=0;
    cout << "Bienvenido, establezca el nombre del software a trabajar: " << endl;
    cin>>n;
    Software *s=new Software(n);
    while(resp!=0){
            cout<<"Que desea hacer?\n1. Agregar requerimento\n2. Muestre Requerimentos \n3. Modifique requerimentos \n0. Terminar "<<endl;
            cin>>resp;
        if(resp!=0){
            switch(resp){
            case 1:
                s->agregueRequerimento();
                break;
            case 2:
                cout<<s->muestreRequerimentos()<<endl;
                break;
            case 3:
                cout<<"Que desea modificar\n1. Modificar nombre.  \n2. Modificar tipo. \n3. Agregar tarea."<<endl;
                cin>>resp2;
                s->modifiqueRequerimento(resp2);
            }
        }
    }
    delete s;
    return 0;
}
