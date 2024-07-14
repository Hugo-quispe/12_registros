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
    int m1=0,r1,r2,m2=99999;
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
    for(int i=0;i<n;i++){
        if(empleados[i].salario>m1){
            m1=empleados[i].salario;
            r1=i;
        }
        if(empleados[i].salario<m2){
            m2=empleados[i].salario;
            r2=i;
        }
    }
    cout<<"el salario mayor es: "<<m1<<" del empleado: "<<empleados[r1].nombre<<endl;
    cout<<"el salario menor es: "<<m2<<" del empleado: "<<empleados[r2].nombre<<endl;
    return 0;
}