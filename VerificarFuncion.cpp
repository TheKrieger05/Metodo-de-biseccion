#include<iostream>
#include<cstring>
#include<vector>
#include<utility>
#include<cctype>
#include<algorithm>
#include "VerificarFuncion.h"
#include "Biseccion.h"
    void VerificarFuncion::verificar(std::string func){
    int x=0; std::string operadores="+-*/^";
    std::vector<int>operandos, indiceX;
    std::pair<std::string,std::vector<std::size_t>>registroDeOperadores;
    func.erase(std::remove_if(func.begin(),func.end(),::isspace),func.end());
    // std::cout<<func; Elimina los espacios en blanco
    for(std::size_t i=0;i<func.length();i++){
        // std::cout<<func[i]<<std::endl;
        if(func[i]=='x'||func[i]=='X'){
            x++;
            indiceX.push_back(i);
        }
        bool esOperador = (operadores.find(func[i])!=std::string::npos ? true : false);
        if(esOperador){
            registroDeOperadores.first += func[i];
            registroDeOperadores.second.push_back(i);
        }
        if(func[i]!='x' && func[i]!='X' && !esOperador)
            operandos.push_back(atoi(&func[i]));
    }
    std::cout<<(x > 0 ? "Procediendo...":"No hay incognitas en la funcion")<<std::endl;
    Biseccion biseccion;
    biseccion.seleccionDeIntervalo_1(registroDeOperadores,operandos,indiceX,func);
}