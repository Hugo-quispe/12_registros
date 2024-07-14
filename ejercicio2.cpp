#include<iostream>
using namespace std;
struct persona{
    string nombre;
    int DNI;
    int edad;
};
int main(){
    persona documentacion[50];
    int n;
    cout<<"bienvenido al registro de datos"<<endl;
    cout<<"ingrese la cantidad de personas a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>documentacion[i].nombre;
        cout<<"ingrese el DNI: ";cin>>documentacion[i].DNI;
        cout<<"ingrese la edad: ";cin>>documentacion[i].edad;
    }
}