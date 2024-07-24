/********************************
 * SEMAFORO CON ARDUINO         *
 * SEED CAMP AMI 2024           *
 * BY: SEBASTIÁN MÉNDEZ         *
 * 23 DE JULIO DEL 2024         *
 ********************************/


/* PASO 1
 * Declarar cuales son las entradas y las salidad de nuestro sistema
 */
 
//Entradas
#define BTN 9

//Salidas
#define ROJO  10
#define AMBAR 11
#define VERDE 12


/* PASO 2
 *  Declarar las variables de nuestro sistema
 */
 
//Variables
int tiempo = 5000;


/*  PASO 3
 *  Declarar las instrucciones que se ejecutaran UNA VEZ
 */
void setup() 
{
  /* PASO 4
   * Definir los puertos que seran entradas o salidas
   */
  //Entradas
    pinMode(BTN,INPUT);
  
    //Salidas
    pinMode(ROJO,OUTPUT);
    pinMode(AMBAR,OUTPUT);
    pinMode(VERDE,OUTPUT);
}


/*  PASO 5
 *  Declarar las instrucciones que se ejecutaran INFINITAMENTE
 */
void loop() 
{
  /* PASO 6
   * Todas las luces se encenderan para indicar que el sistema debe ser iniciado.
   */
  digitalWrite(ROJO,HIGH);
  digitalWrite(AMBAR,HIGH);
  digitalWrite(VERDE,HIGH);

  /* PASO 7
   * Definir la secuencia del sistema.
   */
   // Si se presiona el boton se inicia la secuencia
   if(digitalRead(BTN) == HIGH) 
    {
      //La secuencia se repetira 3 veces.
      for(byte i=1; i<3; i++)
      {
        //La luz roja se enciende fijamente durante el tiempo definido en la variable "tiempo"
        digitalWrite(ROJO, HIGH);
        digitalWrite(AMBAR,LOW);
        digitalWrite(VERDE,LOW);
        delay(tiempo);

        //La luz verde se encendera durante el tiempo definido en la variable "tiempo".
        digitalWrite(VERDE, HIGH);
        digitalWrite(AMBAR,LOW);
        digitalWrite(ROJO,LOW);
        delay(tiempo);

        //Despues del periodo de luz fija la luz verde parpadeara cada medio segundo seis veces.
        for(byte i=0; i<6; i++)
        {
          digitalWrite(AMBAR,HIGH);
          digitalWrite(ROJO,LOW);
          digitalWrite(VERDE,LOW);
          delay(500);
          digitalWrite(AMBAR,LOW);
          digitalWrite(ROJO,LOW);
          digitalWrite(VERDE,LOW);
          delay(500);
        }
      }
    }
}
  
