#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<thread>
#include<chrono>
using namespace std;
using namespace ftxui;


#include<Palpitar.hpp>
#include<Explotar.hpp>
#include<Administrador.hpp>

int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fixed(30)
    );

    Palpitar pal;
    Explotar exp;
    Administrador adm;


    adm.animacion(pantalla);
    

    return 0;
}
