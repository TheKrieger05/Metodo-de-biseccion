#include<iostream>
#include<cstring>
#include "Headers/VerificarFuncion.h"
#include "Headers/InsercionDatos.h"
    void InsercionDatos::insercionFuncion(){
        std::string funcion;
        do{std::cout<<"Ingresar función: ";std::getline(std::cin,funcion);}
        while(funcion.empty());
        VerificarFuncion v;
        v.verificar(funcion);
    }
