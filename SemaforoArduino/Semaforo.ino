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



/*  PASO 2
 *  Declarar los estados de nuestro sistema.
 */

//Estados
#define S0 0
#define S1 1
#define S2 2
#define S3 3


/* PASO 3
 *  Declarar las variables de nuestro sistema
 */

//Variables
int tiempo = 5000;
byte estado = S3;


/*  PASO 4
 *  Declarar las instrucciones que se ejecutaran UNA VEZ
 */
void setup() 
{
  /* PASO 5
   * Definir los puertos que seran entradas o salidas
   */
 
  //Entradas
  pinMode(BTN,INPUT);

  //Salidas
  pinMode(ROJO,OUTPUT);
  pinMode(AMBAR,OUTPUT);
  pinMode(VERDE,OUTPUT);
}


/* PASO 5
 *  Declarar las instrucciones que se ejecutaran INFINITAMENTE
 */
void loop() 
{
  switch(estado)
  {
    /* PASO 6
     * Definir las funciones para cada estado del sistema 
     */
    case S0:
      ALTO_state(); // Estado para la luz roja de alto.
    break;
    case S1:
      ADELANTE_state(); // Estado para la luz verde.
    break;
    case S2:
      PRECAUCION_state(); //Estado para la luz amarilla.
    break;
    case S3:
      IDLE_state(); //Estado de inicio de nuestro sistema.
    break;
  }
}



/* PASO 7
 *  Definir las funciones del sistema
 */
 
//Funciones
void ALTO_state(void) //Funcion para la luz roja estatica
{
  //La luz roja se encendera fijamente durante el tiempo definido en la variable "tiempo".
  digitalWrite(ROJO, HIGH);
  digitalWrite(AMBAR,LOW);
  digitalWrite(VERDE,LOW);
  delay(tiempo);

  //Despues del tiempo transcurrido la luz roja se apagara.
  digitalWrite(ROJO, LOW);
  digitalWrite(AMBAR,LOW);
  digitalWrite(VERDE,LOW);
  
  //Una vez apagada la luz el sistema cambiara de estado.
  estado = S1;
}



void ADELANTE_state(void) //Función para la luz verde fija y parpadeante
{
  //La luz verde se encendera durante el tiempo definido en la variable "tiempo".
  digitalWrite(VERDE, HIGH);
  delay(tiempo);
  
  //Despues del periodo de luz fija la luz verde parpadeara cada medio segundo seis veces.
  for(byte i=0; i<6; i++)
  {
    digitalWrite(VERDE,HIGH);
    digitalWrite(ROJO,LOW);
    digitalWrite(AMBAR,LOW);
    delay(500);
    digitalWrite(AMBAR,LOW);
    digitalWrite(ROJO,LOW);
    digitalWrite(VERDE,LOW);
    delay(500);
  } 

  //Al finalizar el parpadeo el sistema cambiara de estado.
  estado = S2;
}



void PRECAUCION_state(void) //Función para la luz amarilla fija
{
  //La luz ambar se encendera fijamente durante 2 segundos.
  digitalWrite(VERDE, LOW);
  digitalWrite(AMBAR,HIGH);
  digitalWrite(ROJO,LOW);
  delay(2000);

  //Despues de los 2 segundos transcurridos la luz ambar se apagara.
  digitalWrite(VERDE, LOW);
  digitalWrite(AMBAR,LOW);
  digitalWrite(ROJO,LOW);

  //Una vez apagada la luz el sistema cambiara de estado.
  estado = S0;
}



void IDLE_state(void)  //Función de inicio del sistema
{
  //Todas las luces se encenderan para indicar que el sistema debe ser iniciado.
  digitalWrite(ROJO,HIGH);
  digitalWrite(AMBAR,HIGH);
  digitalWrite(VERDE,HIGH);

  //Si se presiona el boton se inicia la secuencia.
  if(digitalRead(BTN) == HIGH)
    estado = S0;
}
