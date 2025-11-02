#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;



class CorazonExplotando2
{
private:
    list<string> corazonexplotando2;
    int x=36;
    int y=5;

public:
    CorazonExplotando2() 
    {
        corazonexplotando2={                                                                                                         
            string("    *      *           *     .     *       *          *  "), 
            string("          *     .  *      o     *       *     *          "), 
            string("   *      o    *         .       *     o        *        "), 
            string("        *          *        *        .      *         *  "), 
            string("   *         *   .      *        o       *          *    "), 
            string("        *         *         *       *       *            "), 
            string(" .          *          o       *        *       *        "),
            string("        *        *          *         *         o      * "), 
            string("   *      .      *      o         *       *       *      "), 
            string("           *        *        *         *         *       "), 
            string("     *           *         *      *       *          *   "), 
            string("            *       o          *       *         *       "), 
            string(" .      *       *       *           *          o        *"), 
            string("        *            *        *           *          *   "),  
            string(" .          *          o       *        *       *        "),
            string("        *        *          *         *         o      * "), 
            string("   *      .      *      o         *       *       *      "), 
            string("           *        *        *         *         *       "), 
            string("     *           *         *      *       *          *   "), 
            string("            *       o          *       *         *       "), 
            string(" .      *       *       *           *          o        *"), 
            string("        *            *        *           *          *   ")
    };
}

    void Imprimir(Screen& pantalla)
    {
        int fila=0;
        for (auto &&linea : corazonexplotando2)
        {
            int columna=0;
            for (auto &&letra : linea)
            {
                Pixel& pixel = pantalla.PixelAt(x + columna,y + fila);
                pixel.character = letra;
                pixel.background_color = Color::Default;
                pixel.foreground_color = Color::RGB(255, 100, 0);
                columna++;
            }
            fila++;
        }
    }
};