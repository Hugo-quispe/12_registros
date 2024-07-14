#include<iostream>
using namespace std;
struct atletas{
    string nombre;
    string pais;
    string diciplina;
    int medallas;
};
int main(){
    int n;
    cout<<"ingrese los atletas a registrar: ";cin>>n;
    atletas datos[n];
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>datos[i].nombre;
        cout<<"ingrese el pais: ";cin>>datos[i].pais;
        cout<<"ingrese su diciplina: ";cin>>datos[i].diciplina;
        cout<<"ingrese el total de medallas: ";cin>>datos[i].medallas;
    }
    
}
