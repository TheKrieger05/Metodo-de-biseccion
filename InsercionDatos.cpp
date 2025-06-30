#include<iostream>
#include<cstring>
#include "VerificarFuncion.h"
#include "InsercionDatos.h"
    void InsercionDatos::insercionFuncion(){
        std::string funcion;
        do{std::cout<<"Ingresar función: ";std::getline(std::cin,funcion);}
        while(funcion.empty());
        VerificarFuncion v;
        v.verificar(funcion);
    }
