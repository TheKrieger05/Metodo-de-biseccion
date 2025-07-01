#ifndef BISECCION_H
#define BISECCION_H
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>

class Biseccion{
    public:
    float ejecutarOperaciones(std::string func);
    float evaluarFuncion(float valor,std::string func);
    void seleccionDeIntervalo_1(std::pair<std::string,std::vector<std::size_t>>operadores,
    std::vector<int>operandos,std::vector<int>indiceX,std::string func);
};

#endif