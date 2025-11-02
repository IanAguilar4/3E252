#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;



class Letras
{
private:
    list<string> letras;
    int x=44;
    int y=8;

public:
    Letras() 
    {
        letras={                               
            string("      .___________. _______         "),
            string("      |           ||   ____|        "),
            string("      `---|  |----`|  |__           "),
            string("          |  |     |   __|          "),
            string("          |  |     |  |____         "),
            string("          |__|     |_______|        "),
            string("                                    "),
            string("     ___      .___  ___.   ______   "),
            string("    /   \\     |   \\/   |  /  __  \\  "),
            string("   /  ^  \\    |  \\  /  | |  |  |  | "),
            string("  /  /_\\  \\   |  |\\/|  | |  |  |  | "),
            string(" /  _____  \\  |  |  |  | |  `--'  | "),
            string("/__/     \\__\\ |__|  |__|  \\______/  ")
        };
    }

    void Imprimir(Screen& pantalla)
    {
        int fila=0;
        for (auto &&linea : letras)
        {
            int columna=0;
            for (auto &&letra : linea)
            {
                Pixel& pixel = pantalla.PixelAt(x + columna,y + fila);
                pixel.character = letra;
                pixel.background_color = Color::Default;
                pixel.foreground_color = Color::RGB(250, 50, 50);
                columna++;
            }
            fila++;
        }
    }
};