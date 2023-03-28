#include "pch.h"
#include "Felino.h"
using namespace System;
int main(){
    Felino* ObjGato;
    Felino* ObjLeon;

    ObjGato = new Felino();
    ObjLeon = new Felino('A','F',true,true,true,true);

    cout << "\nTiempo 1";
    cout << "\nDatos del gato";
    cout << "\nEl color es: " << ObjGato->get_color();
    cout << "\nEl pelaje  es: " << ObjGato->get_pelaje();
    cout << "\nTiene garras: " << ObjGato->get_garras();




    cout << "\nDatos del león";
    cout << "\nEl color es: " << ObjLeon->get_color();
    cout << "\nEl pelaje  es: " << ObjLeon->get_pelaje();
    cout << "\nTiene garras: " << ObjLeon->get_garras();
    
    cout << "\nTiempo 2";
    ObjGato->set_color('N');//cambia de color a negro
    ObjGato->set_garras(false);//cambia de garras a false

    cout << "\nDatos del gato";
    cout << "\nEl color es: " << ObjGato->get_color();
    cout << "\nEl pelaje  es: " << ObjGato->get_pelaje();
    cout << "\nTiene garras: " << ObjGato->get_garras();

    ObjGato->comer();

    return 0;
}
