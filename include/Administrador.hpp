#pragma once

#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<thread>
#include<chrono>
#include<cmath>
using namespace std;
using namespace ftxui;

#include<Palpitar.hpp>
#include<Explotar.hpp>
#include<Anuncio.hpp>

class Administrador
{
    private:
        Palpitar pal;
        Explotar expl;
        Anuncio anu;
    public:

    void animacion(Screen& pantalla)
    {
        pal.Imprimir(pantalla);
        expl.Imprimir(pantalla);
        anu.Imprimir(pantalla);
    }
};