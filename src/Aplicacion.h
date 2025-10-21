#ifndef APLICACION_H
#define APLICACION_H

#include "servicios/GestorUsuarios.h"
#include "servicios/GestorCanciones.h"
#include "modelos/Usuario.h"
#include "modelos/Cancion.h"

class Aplicacion {
private:
    GestorUsuarios* gestorUsuarios;
    GestorCanciones* gestorCanciones;  // <- NUEVO
    Usuario* usuarioActual;
    
    void cargarDatos();
    void mostrarMenuPrincipal();
    void mostrarMenuUsuarioEstandar();
    void mostrarMenuUsuarioPremium();
    void reproduccionAleatoriaEstandar();  // <- NUEVO
    void reproduccionAleatoriaPremium();   // <- NUEVO
    void reproducirCancion(Cancion* cancion, bool esCalidadAlta);  // <- NUEVO
    void login();
    void registrarUsuario();
    void salir();
    void cerrarSesion();
    string obtenerFechaActual();

public:
    Aplicacion();
    ~Aplicacion();
    void ejecutar();
};

#endif