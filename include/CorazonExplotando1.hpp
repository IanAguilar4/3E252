#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;



class CorazonExplotando1
{
private:
    list<string> corazonexplotando1;
    int x=36;
    int y=5;

public:
    CorazonExplotando1() 
    {
        corazonexplotando1={                                                                                                         
            string("      *             ###            ###     *           "),
            string("       *          ########       ######       *        "),
            string("            *   ###########   ###########   *          "),   
            string("       *        #########################        *     "),   
            string("           *   ###########################  *          "),   
            string("      *       #############################       *    "),   
            string("          *   #############################   *        "),   
            string("            #################################          "),    
            string("        *  ##################################    *     "),    
            string("             ###############################           "),    
            string("          *   #############################   *        "),   
            string("       *       ###########################       *     "),   
            string("            *   #########################   *          "),   
            string("      *         #######################         *      "),   
            string("                #######################                "),    
            string("         *         #################        *          "),   
            string("     *                ###########                *     "),    
            string("             *          #######          *             "),   
            string("        *       o          ###        o        *       "),   
            string("             *        *      #     *        *          "),   
            string("    .             *        .   .        *             o"),      
            string("          *              *       *              *      ")    
    };
}

    void Imprimir(Screen& pantalla)
    {
        int fila=0;
        for (auto &&linea : corazonexplotando1)
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