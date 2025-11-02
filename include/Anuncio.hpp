#pragma once
#include<thread>
#include<chrono>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;

#include<Letras.hpp>

class Anuncio
{
    private:
       Letras let;
        int cont= 0;
    public:
        void Imprimir(Screen& pantalla)
        {
            let.Imprimir(pantalla);
            pantalla.Print(); 
            this_thread::sleep_for(chrono::milliseconds(4000)); 
            pantalla.Clear(); 
            cout<< pantalla.ResetPosition(true); 
        }
};