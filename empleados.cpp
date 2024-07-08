#include<iostream>
using namespace std;
struct EMP {
    int numero;
    string nombre;
    float ventas[12];
    float salario;
};
int main(){
    EMP empleado[50];
    int n;
    cout<<"ingrese la cantidad de empleados: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"ingrese su numero: ";
        cin>>empleado[i].numero;
        cin.ignore();
        getline(cin, empleado[i]. nombre);
        cout<<"ingrese su nombre: ";
        cin>>empleado[i].nombre;
        for(int j=0;j<12;j++){
            cout<<"ingrese las ventas del mes"<<" "<<j+1<<":";
            cin>>empleado[i].ventas[j];
        }
        cout<<"ingrese su salario: ";cin>>empleado[i].salario;
    }
    for(int i=0;i<n;i++){
        cout<<"empleado es: "<<empleado[i].nombre<<endl;
        cout<<"su numero es: "<<empleado[i].numero<<endl;
        for(int j=0;j<12;j++){
            cout<<"las ventas fueron: "<<empleado[i].ventas[j]<<endl;
        }
        cout<<"su salario es: "<<empleado[i].salario;
    }

}