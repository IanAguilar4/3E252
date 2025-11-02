#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;



class Corazon1
{
private:
    list<string> corazon1;
    int x=44;
    int y=8;

public:
    Corazon1() 
    {
        corazon1={                               
            string("            #####         #####            "), 
            string("         ###########   ###########         "), 
            string("        ###########################        "), 
            string("       #############################       "), 
            string("       #############################       "), 
            string("       #############################       "), 
            string("       #############################       "), 
            string("        ###########################        "), 
            string("         #########################         "), 
            string("           #####################           "), 
            string("             #################             "), 
            string("               #############               "), 
            string("                 ##########                "), 
            string("                   #####                   "), 
            string("                     #                     ") 
        };
    }

    void Imprimir(Screen& pantalla)
    {
        int fila=0;
        for (auto &&linea : corazon1)
        {
            int columna=0;
            for (auto &&letra : linea)
            {
                Pixel& pixel = pantalla.PixelAt(x + columna,y + fila);
                pixel.character = letra;
                pixel.background_color = Color::Default;
                pixel.foreground_color = Color::RGB(150, 10, 10);
                columna++;
            }
            fila++;
        }
    }
};