#include "Usuario.h"

using namespace std;

Usuario::Usuario() {
    nickname = "";
    contrasena = "";
    tipoMembresia = "estandar";
    ciudad = "";
    pais = "";
    fechaInscripcion = "";
}

Usuario::Usuario(string nick, string pass, string tipo, string city, string country, string fecha) {
    nickname = nick;
    contrasena = pass;
    tipoMembresia = tipo;
    ciudad = city;
    pais = country;
    fechaInscripcion = fecha;
}

Usuario::~Usuario() {
    // Destructor
}

// Getters
string Usuario::getNickname() const {
    return nickname;
}

string Usuario::getContrasena() const {
    return contrasena;
}

string Usuario::getTipoMembresia() const {
    return tipoMembresia;
}

string Usuario::getCiudad() const {
    return ciudad;
}

string Usuario::getPais() const {
    return pais;
}

string Usuario::getFechaInscripcion() const {
    return fechaInscripcion;
}

// Setters
void Usuario::setNickname(string nick) {
    nickname = nick;
}

void Usuario::setContrasena(string pass) {
    contrasena = pass;
}

void Usuario::setTipoMembresia(string tipo) {
    tipoMembresia = tipo;
}

void Usuario::setCiudad(string city) {
    ciudad = city;
}

void Usuario::setPais(string country) {
    pais = country;
}

void Usuario::setFechaInscripcion(string fecha) {
    fechaInscripcion = fecha;
}

// Métodos
bool Usuario::esPremium() const {
    return tipoMembresia == "premium";
}

bool Usuario::validarContrasena(string pass) const {
    return contrasena == pass;
}

void Usuario::mostrarInfo() const {
    cout << "\n=== INFORMACION DEL USUARIO ===" << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Membresia: " << tipoMembresia << endl;
    cout << "Ubicacion: " << ciudad << ", " << pais << endl;
    cout << "Fecha inscripcion: " << fechaInscripcion << endl;
    cout << "================================\n" << endl;
}