#include<iostream>
using namespace std;
struct atletas{
    string nombre;
    string pais;
    string diciplina;
    int medallas;
};
int main(){
    int n,h=0,r;
    string m;
    cout<<"ingrese los atletas a registrar: ";cin>>n;
    atletas datos[n];
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre: ";cin>>datos[i].nombre;
        cout<<"ingrese el pais: ";cin>>datos[i].pais;
        cout<<"ingrese su diciplina: ";cin>>datos[i].diciplina;
        cout<<"ingrese el total de medallas: ";cin>>datos[i].medallas;
    }
    cout<<"elija un pais: ";cin>>m;
    for(int i=0;i<n;i++){
            if(datos[i].pais==m){
                cout<<"el atleta de ese pais es: "<<datos[i].nombre<<endl;
                cout<<"en la diciplina de: "<<datos[i].diciplina<<endl;
                 if(datos[i].medallas>h){
                    h=datos[i].medallas;
                    r=i;
                }
            }
    }
    cout<<"el atleta con mayor medallas es: "<<datos[r].nombre<<" con "<<h<<" medallas"<<endl;
}