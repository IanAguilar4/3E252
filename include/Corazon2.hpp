#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;



class Corazon2
{
private:
    list<string> corazon2;
    int x=36;
    int y=5;

public:
    Corazon2() 
    {
        corazon2={                                                                                                         
            string("        *      ########      *      ########      *        "),  
            string("           ###############       ###############           "),  
            string("     *   ###################   ###################         "),  
            string("         ##########################################        "),  
            string("        ###########################################  *     "),  
            string("     * #############################################       "),  
            string("       #############################################       "),  
            string("       #############################################       "),  
            string("   *   #############################################       "),  
            string("        ###########################################        "),  
            string("        ###########################################        "),  
            string("      *  #########################################    *    "),  
            string("           #####################################           "),  
            string("        *   ###################################            "),  
            string("              ###############################    *         "),  
            string("                ###########################                "),  
            string("         *        #######################     *            "),  
            string("                    ###################              *     "),  
            string("        *      *      ###############         *            "),  
            string("                        ###########                        "),  
            string("                          #######          *               "),  
            string("               *            ###                            "),  
        };
    }

    void Imprimir(Screen& pantalla)
    {
        int fila=0;
        for (auto &&linea : corazon2)
        {
            int columna=0;
            for (auto &&letra : linea)
            {
                Pixel& pixel = pantalla.PixelAt(x + columna,y + fila);
                pixel.character = letra;
                pixel.background_color = Color::Default;
                pixel.foreground_color = Color::RGB(255, 50, 50);
                columna++;
            }
            fila++;
        }
    }
};