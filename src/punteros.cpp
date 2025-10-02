
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int *pNum = NULL;

    pNum = new int;

    *pNum=25;
    //cout << "Argumentos" << argc << endl;
    //cout << "Hola " << argv[1] << endl;
    cout << "Dreccion guardada:" << pNum << '\n';
    cout << "Valor:" << *pNum << '\n';
    cout << "Direccion del puntero:" << &pNum << '\n';
    return 0;
}