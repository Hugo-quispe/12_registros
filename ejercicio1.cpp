#include<iostream>
using namespace std;
struct EMP
{
    string nombre;
    string genero;
    float salario;
};
int main(){
    int n;
    cout<<"Empresa DataTech"<<endl;
    cout<<"ingrese  la cantidad de empleados: ";cin>>n;
    EMP empleados[n];
    for(int i=0;i<n;i++){
        cin.ignore( );
        getline(cin,empleados[i].nombre);
        cout<<"ingrese el nombre: ";cin>>empleados[i].nombre;
        getline(cin,empleados[i].genero);
        cout<<"ingrese el genero: ";cin>>empleados[i].genero;
        cout<<"ingrese el salario: ";cin>>empleados[i].salario;
    }
}