/*
 * Estructura básica
 * Por: Ulises Lujan
 * Fecha: 11 de Abril de 2022
 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas
#include <Serial.h> //No agregar. Esta linea es solamente ilustrativa

// Constantes

// Variables
int dato = 0;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin (115200); // Iniciar comunicacion serial
  Serial.println ("Se ha iniciado la comunicacion serial"); //Mensaje a enviar
  delay (5000);
}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  
  // dato = dato + 1; //Forma alternativa
  dato++;

  //Contador de anillo con comparaciones
  if (dato > 8) {
    dato = 0;
  }

  //Contador de anillo con operador
  // dato %= 8;

  Serial.println (dato); //Muestra en monitor serial el valor de la variable
  delay (1000);

}// Fin de void loop

// Funcioes del usuario
