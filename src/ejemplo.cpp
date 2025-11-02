#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<thread>
#include<chrono>
#include<string>
using namespace std;
using namespace ftxui;

#include<Dibujo.hpp>

int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fixed(10)
    );

    Dibujo dibujo1;
    Dibujo dibujo2;

    while (true)
    {
        dibujo1.Imprimir(pantalla);
        dibujo2.Imprimir(pantalla);
        dibujo2.MoverAbajo();
        pantalla.Print();
        this_thread::sleep_for(chrono::milliseconds(100));
        pantalla.Clear();
        cout<< pantalla.ResetPosition(true);
        
    }

    return 0;
}