
#include <iostream> 
#include <fstream> 
using namespace std; 
 

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
while (inicioAnalisis){ 
 
 
        getline(archivo, lineaActual); 
        while (lineaActual==""){ 
            getline(archivo, lineaActual); 
        } 
 
        //Aqui comienza el analisis de "lineaActual", para determinar los token, valores y tipos 
        //############################################################################################################// 
 
        int i =0; 
        int k=0; 
        int h=0; 
 
         if(lineaActual!="}"){ 
            cout<<"Token:"; 
        }
 // yo       char lineaTemporal [(k+1)-lineaActual.size()]; 
        for(h=k+1;h<lineaActual.size();h++){//for que imprime el valor del token (lo que va despues del ":") 
            cout<<lineaActual[h]; 
 
 
        } 
        cout<<"\n"; 
        //############################################################################################################// 
 
        if (lineaActual=="}"){ 
            llavesAbiertas--; 
        } 
        if (llavesAbiertas==0){ //detecta la llave final del JSON 
            inicioAnalisis = false; 
            cout<<"Token: }, Final del JSON\n"<<endl; 
        } 
    }

 
    
    return 0; 
}
