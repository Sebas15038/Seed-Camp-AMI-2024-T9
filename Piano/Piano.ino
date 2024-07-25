/**********************************
 * PIANO CON ARDUINO              *
 * SEED CAMP AMI 2024             *
 * BY: TIGRES 6652                *
 * CREATED: 24 DE JULIO DEL 2024  *
 **********************************/

//Frecuencia de las notas
#define T_C 200
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440


//Entradas
const int MUSICAL = 9;
const int C = 8;
const int E = 7;
const int F = 6;
const int G = 5;
const int A = 4;


//Salidas
const int PIEZO = 3;
const int LED = 13;



void setup() 
{
  pinMode(C,INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(A, INPUT);
  pinMode(MUSICAL,INPUT);
  pinMode(PIEZO, OUTPUT);
  pinMode(LED, OUTPUT);

  
  digitalWrite(C,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(A,HIGH);
  digitalWrite(MUSICAL, HIGH);
  digitalWrite(PIEZO,LOW);
  digitalWrite(LED,LOW);
}

void loop() 
{
  while(digitalRead(C) == LOW)
  {
    tone(PIEZO,T_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(E) == LOW)
  {
    tone(PIEZO,T_E);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(F) == LOW)
  {
    tone(PIEZO,T_F);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(G) == LOW)
  {
    tone(PIEZO,T_G);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(A) == LOW)
  {
    tone(PIEZO,T_A);
    digitalWrite(LED,HIGH);
  }

  if(digitalRead(MUSICAL) == LOW)
  {
    midi();
  }

  noTone(PIEZO);
  digitalWrite(LED,LOW);
}


void midi(void) 
{
      tone(PIEZO, 146, 706.188118812);
      delay(784.653465347);
      delay(264.851485149);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 593.316831683);
      delay(659.240924092);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 593.316831683);
      delay(659.240924092);
      delay(0.825082508251);
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 138, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 130, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 277, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 277, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 233, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 155, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 164, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 277, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 277, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 236.881188119);
      delay(263.201320132);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 184, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 130, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 146, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 146, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 207, 266.584158416);
      delay(296.204620462);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 261, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 293, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 311, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 349, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 207, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 233, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 261, 118.069306931);
      delay(131.188118812);
      delay(0.825082508251);
      tone(PIEZO, 277, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 261, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 220, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 220, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 246, 1068.56435644);
      delay(1187.29372937);
      delay(0.825082508251);
      tone(PIEZO, 311, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 233, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 233, 712.128712871);
      delay(791.254125413);
      delay(0.825082508251);
      tone(PIEZO, 174, 355.693069307);
      delay(395.214521452);
      delay(0.825082508251);
      tone(PIEZO, 155, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 155, 88.3663366337);
      delay(98.1848184818);
      delay(297.854785479);
      tone(PIEZO, 164, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 174, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 195, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 195, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 220, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 233, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 261, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 220, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 88.3663366337);
      delay(98.1848184818);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 110, 177.475247525);
      delay(197.194719472);
      delay(0.825082508251);
      tone(PIEZO, 146, 1425.0);
      delay(1583.33333333);
  }