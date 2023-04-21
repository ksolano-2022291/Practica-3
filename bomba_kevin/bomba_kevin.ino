/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:  EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto:Bomba de Agua 
   Dev: Kevin Audiel Solano torres
   Fecha: 21 de abril
*/

#define LEDTRANSISTOR 2
#define LEDBOMBA 3
#define RELE  4
 
void setup() {
  pinMode(LEDTRANSISTOR,INPUT);
  pinMode(LEDBOMBA,OUTPUT);
  pinMode(RELE,OUTPUT);
  
}

void loop() {
  bool estado_transistor = digitalRead(LEDTRANSISTOR);
  if(estado_transistor==HIGH)
  {
    digitalWrite(RELE,LOW);
    digitalWrite(LEDBOMBA,HIGH);
  }
  if(estado_transistor==LOW){
    digitalWrite(RELE,HIGH);
    digitalWrite(LEDBOMBA,LOW);
  }

}
