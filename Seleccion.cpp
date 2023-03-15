#include <iostream>
using namespace std;
int main(){
 /*int 4 bytes
int tam=0;
int datos[]= {10,40,100,250,5000};
 tam=sizeof(datos) /sizeof(datos[0]);
 for(int i:datos){
    cout<<i<<endl;
 }

 for (int i=0; i<tam;i++){
 cout<<datos[i]<<endl;
 }

*/
int inicio=0, fin=0, res=0;
cout<<"Ingrese tabla inicial:"<<endl;
cin>>inicio;
cout<<"Ingrese tabla final:"<<endl;
cin>>fin;

for(int rango=inicio;rango<=fin;rango++){
    for(int i=1; i<=10;i++){
    res=rango*i;
    cout<<rango<<" X "<<i<<"="<<res<<endl;
    }
}
//cout<<"Ingrese tabla: "<<endl;
//cin>>tabla;

 }
