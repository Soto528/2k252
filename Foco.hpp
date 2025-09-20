#pragma once
#include "EstadoFoco.hpp"
#include <string>

class Foco {
private:
    EstadoFoco estado;
public:
    Foco() : estado(false) {}
    ~Foco() {}
    void Encender() { estado = true; }
    void Apagar() { estado = false; }
    std::string MostrarEstado() const {
        return estado ? "Encendido " : "Apagado ";
    }
};
