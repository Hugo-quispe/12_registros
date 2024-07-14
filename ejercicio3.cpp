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
    int n;
    cout<<"ingrese la catidad de personas a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>datos[i].nombre;
        cout<<"ingrese la fecha de nacimiento: ";cin>>datos[i].dia;
        cout<<"ingrese en mes de nacimiento(ingrese con numeros): ";cin>>datos[i].mes;
        cout<<"ingrese el tiempo en que nacimiento: ";cin>>datos[i].tiempo;
    }
}