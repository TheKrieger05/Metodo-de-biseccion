#include<iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
#include "Headers/Biseccion.h"
#include <cmath>
#include <sstream>
#include <iomanip>

//float Biseccion::ejecutarOperaciones(std::string func){
//    for(std::size_t i = 0;i<func.length();i++){
//        terminar luego
//    }
//}

std::string formatFloat(float num){
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(2)<<num;
    std::string str = oss.str();
    if(str.find('.')!=std::string::npos)
        str.erase(str.find_last_not_of('0')+1, std::string::npos);
        if(str.back()=='.')
            str.pop_back();
    return str;
}

float Biseccion::evaluarFuncion(float valor,std::string func){
    std::string conv = "("+formatFloat(valor)+")";
        for(std::size_t i = 0;i < func.length();i++){
            if(func[i]=='x'||func[i]=='X')
                func.replace(i,1,conv);
        }
        float res = 0.1f; //ejecutarOperaciones(func);
        return res;
}

void Biseccion::seleccionDeIntervalo_1(std::pair<std::string,std::vector<std::size_t>>operadores,
    std::vector<int>operandos,std::vector<int>indiceX,std::string func){
        float a,b,c,fa,fb;
        std::cout<<"Ingrese el intervalo [_ , b] :";std::cin>>a;
        std::cout<<"Ingrese el intervalo ["<<a<<" , _] :";std::cin>>b;
        c = (a + b)/2;
        fa = evaluarFuncion(a,func);
        fb = evaluarFuncion(b,func);
    }