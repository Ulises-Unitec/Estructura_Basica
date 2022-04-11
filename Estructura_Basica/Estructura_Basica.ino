/*
 * Estructura básica
 * Por: Ulises Lujan
 * Fecha: 11 de Abril de 2022
 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas
//#include <Serial.h> //No agregar. Esta linea es solamente ilustrativa

// Constantes

// Variables
int dato = 0;
double timeStart, timeFinish;

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
  
  // Codigo con comparaciones
  timeStart = micros ();
  
    // Ejecuta ciclo n veces 
  for (int i = 0; i < 10000; i++){
    
  // dato = dato + 1; //Forma alternativa
  dato++;

  //Contador de anillo con comparaciones
  if (dato > 8) {
    dato = 0;
   }
  }

timeFinish = micros ();

   Serial.print ("con comparaciones");
   Serial.println (timeFinish - timeStart); //Manda al monitor serial la diferencia entre variables de tiempo
    delay(10000);

  //Codigo con operadores
  timeStart = micros ();
  
    // Ejecuta ciclo n veces 
  for (int i = 0; i < 10000; i++){
    
  // dato = dato + 1; //Forma alternativa
  dato++;

  //Contador de anillo con operador
     dato %= 8;
     }

timeFinish = micros ();

   Serial.print ("con operadores");
   Serial.println (timeFinish - timeStart); //Manda al monitor serial la diferencia entre variables de tiempo
    delay(10000);   

}// Fin de void loop

// Funcioes del usuario
