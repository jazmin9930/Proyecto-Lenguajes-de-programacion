
#include <iostream> 
#include <fstream> 
using namespace std; 
 
//Jazmin 
int main() { 
    string lineaActual, primerLinea; 
    ifstream archivo("JSON.txt"); 
    int llavesAbiertas = 0; 
    bool inicioAnalisis = true; 
 
     (getline(archivo, lineaActual));//Esta instruccion es para pasar de una linea del texto, a la siguiente. 
 
    while(lineaActual==""){ //instruccion que ignora las lineas en blanco, itera hasta encontrar la linea con la "{" 
        getline(archivo, lineaActual); 
    } 
 //Any 
 
    primerLinea=lineaActual; 
 
    primerLinea=lineaActual; 
    if(primerLinea!="{"){ 
 
        cout<<"Json en formato incorrecto, favor de formatear el json en el formato adecuado"<<endl; 
        cout<<"Pagina recomendada para formatear json: https://jsonformatter.curiousconcept.com/"<<endl; 
        inicioAnalisis = false; 
    } else if (lineaActual=="{"){ 
        cout<<"Token: {, Inicio del JSON\n"<<endl; 
        llavesAbiertas++; 
    }

 
 
    
    return 0; 
}
