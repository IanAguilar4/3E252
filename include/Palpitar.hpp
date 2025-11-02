#pragma once
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;

#include<Corazon1.hpp>
#include<Corazon2.hpp>

class Palpitar
{
    private:
        Corazon1 cor1;
        Corazon2 cor2;
        int cont;
        int des=2;
        int aux=2000;
    public:
        void Imprimir(Screen& pantalla)
        {
            cont=0;
            while(cont<30)
            {
                if(des%2==0)
                {
                    cor1.Imprimir(pantalla);
                }
                else
                {
                    cor2.Imprimir(pantalla);
                }
                pantalla.Print(); 
                this_thread::sleep_for(chrono::milliseconds(aux)); 
                pantalla.Clear(); 
                cout<< pantalla.ResetPosition(true);
                if(aux>250) aux= aux * .9;
                if(aux<250) cont++;
                des++;
            }
        }
};