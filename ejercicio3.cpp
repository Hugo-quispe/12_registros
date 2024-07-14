#include<iostream>
using namespace std;
struct fecha{
    string nombre;
    int dia;
    int mes;
    int tiempo; 
};
int main(){
    fecha datos[50];
    int n,m;
    cout<<"ingrese la catidad de personas a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>datos[i].nombre;
        cout<<"ingrese la fecha de nacimiento: ";cin>>datos[i].dia;
        cout<<"ingrese en mes de nacimiento(ingrese con numeros): ";cin>>datos[i].mes;
        cout<<"ingrese el tiempo en que nacio: ";cin>>datos[i].tiempo;
    }
    do
    {
        cout<<"ingrese un mes aleatorio(en numeros): ";cin>>m;
        for(int i=0;i<n;i++){
            if(datos[i].mes==m){
                cout<<"la persona que nacio en ese mes es: "<<datos[i].nombre<<endl;
                cout<<"la fecha en que nacio es: "<<datos[i].dia<<endl;
                cout<<"el tiempo en que nacio es: "<<datos[i].tiempo<<endl;
            }
        }
    } while (m!=0);
}