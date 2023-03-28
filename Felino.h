#pragma once
#include<iostream>
using namespace std;


class Felino {
private:
	char color;
	char pelaje;
	bool garras;
	bool cola;
	bool colmillos;
	bool bigote;
public:
	Felino();
	Felino(char pcolor, char ppelaje, bool pgarras, bool pcola, bool pcolmillos, bool pbigote);
	~Felino();
	
	void cazar();
	void dormir();
	void comer();
	void beber();
	void correr();
	void saltar();
	void arrastrar();
	void rugir();

	//Métodos de acceso-GET

	char get_color();
	char get_pelaje();
	bool get_garras();
	bool get_cola();
	bool get_colmillos();
	bool get_bigote();

	//Método asignación de valores-SET

	void set_color(char valor);
	void set_pelaje(char valor);
	void set_garras(bool valor);
	void set_cola(bool valor);
	void set_colmillos(bool valor);
	void set_bigote(bool valor);
};

//Implementación

Felino::Felino(void) {
	color='B';
	pelaje='N';
	garras=true;
	cola=true;
	colmillos=true;
	bigote=true;
}

Felino::Felino(char pcolor, char ppelaje, bool pgarras, bool pcola, bool pcolmillos, bool pbigote) {
	this->color = pcolor;
	this->pelaje = ppelaje;
	this->garras = pgarras;
	this->cola = pcola;
	this->colmillos = pcolmillos;
	this->bigote = pbigote;
}

Felino::~Felino() {}
//Métodos
void Felino::cazar() {
	cout << "\nEsta cazando!";
}
void Felino::dormir() {
	cout << "\Esta durmiendo!";
}
void Felino::comer() {
	cout << "\nEsta comiendo!";
}
void Felino::beber() {
	cout << "\nEsta bebiendo!";
}
void Felino::correr() {
	cout << "\nEsta corriendo!";
}
void Felino::saltar() {
	cout << "\nEsta saltando!";
}
void Felino::arrastrar() {
	cout << "\nEsta arrastrando!";
}
void Felino::rugir() {
	cout << "\nEsta rugiendo!";
}
// GET
char Felino::get_color() {
	return this->color;
}
char Felino::get_pelaje() {
	return this->pelaje;
}
bool Felino::get_garras() {
	return this->garras;
}
bool Felino::get_cola() {
	return this->cola;
}
bool Felino::get_colmillos() {
	return this->colmillos;
}
bool Felino::get_bigote() {
	return this->bigote;
}
//SET
void Felino::set_color(char valor) {
	this->color = valor;
}
void Felino::set_pelaje(char valor) {
	this->pelaje = valor;
}
void Felino::set_garras(bool valor) {
	this->garras = valor;
}
void Felino::set_cola(bool valor) {
	this->cola = valor;
}
void Felino::set_colmillos(bool valor) {
	this->colmillos = valor;
}
void Felino::set_bigote(bool valor) {
	this->bigote = valor;
}
