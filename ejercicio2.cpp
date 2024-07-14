#include<iostream>
using namespace std;
struct persona{
    string nombre;
    int DNI;
    int edad;
};
int main(){
    persona documentacion[50];
    int n,p=0,m=0,r=0;
    cout<<"bienvenido al registro de datos"<<endl;
    cout<<"ingrese la cantidad de personas a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>documentacion[i].nombre;
        cout<<"ingrese el DNI: ";cin>>documentacion[i].DNI;
        cout<<"ingrese la edad: ";cin>>documentacion[i].edad;
        p=p+documentacion[i].edad;
    }
    for(int i=0;i<n;i++){
        if(documentacion[i].edad>50){
            cout<<"la edad de esta persona "<<documentacion[i].nombre<< "es mayor a 50"<<endl;
            m++;
        }
    }
    cout<<"en total las personas mayores a 50 es: "<<m<<endl;
    r=p/n;
    cout<<"la edad promedio es: "<<r<<endl;
}