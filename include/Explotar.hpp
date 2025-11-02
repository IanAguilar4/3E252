#pragma once
#include<thread>
#include<chrono>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;

#include<CorazonExplotando1.hpp>
#include<CorazonExplotando2.hpp>

class Explotar
{
    private:
        CorazonExplotando1 expl1;
        CorazonExplotando2 expl2;
        int cont=0;
    public:
        void Imprimir(Screen& pantalla)
        {
            expl1.Imprimir(pantalla);
            pantalla.Print(); 
            this_thread::sleep_for(chrono::milliseconds(2000)); 
            pantalla.Clear(); 
            cout<< pantalla.ResetPosition(true);
            expl2.Imprimir(pantalla);
            pantalla.Print(); 
            this_thread::sleep_for(chrono::milliseconds(2000)); 
            pantalla.Clear(); 
            cout<< pantalla.ResetPosition(true);
        }
};