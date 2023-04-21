/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:  EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Teclado matricial y dislay 7 segmentos
   Dev: Kevin Audiel Solano torres
   Fecha: 14 de abril
*/

//Librerias
#include <Keypad.h>    //Libreria que me permite usar el teclado matricial.

//Macros o directivas de preprocesador
#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 2  //pin2 conectado a la fila 1
#define f2_teclado 3  //pin3 conectado a la fila 2
#define f3_teclado 4  //pin4 conectado a la fila 3
#define f4_teclado 5  //pin5 conectado a la fila 4
#define c1_teclado 6  //pin6 conectado a la columna 1
#define c2_teclado 7  //pin7 conectado a la columna 2
#define c3_teclado 8  //pin8 conectado a la columna 3
#define c4_teclado 9  //pin9 conectado a la columna 4
#define a 10
#define b A0
#define c A1
#define d A2
#define e A3
#define f A4
#define g A5


char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};



Keypad teclado_kevin = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup() 
{
  Serial.begin(9600);    //Inicio la comunicacion serial.
  Serial.println("Prueba del teclado matricial");   //Envio de mensaje
  pinMode(a,OUTPUT);
   pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
     pinMode(d,OUTPUT);
      pinMode(e,OUTPUT);
       pinMode(f,OUTPUT);
        pinMode(g,OUTPUT);
}

void loop() 
{
  
  char tecla = teclado_kevin.getKey();  //Obtengo la tecla que presione
  
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,LOW);
  
  
  
switch(tecla){

  case('1'):
  {
   digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
    delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }

    case('2'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('3'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('4'):
  {
   digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('5'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('6'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('7'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('8'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('9'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
    case('0'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,LOW);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('A'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('B'):
  {
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
  
    case('C'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,LOW);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('D'):
  {
   digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
     digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,LOW);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('*'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,LOW);
   break;
    
  }
  
    case('#'):
  {
   digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
       digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
         digitalWrite(g,HIGH);
          delay(1000);
   digitalWrite(a,LOW);
    digitalWrite(b,LOW);
     digitalWrite(c,LOW);
      digitalWrite(d,LOW);
       digitalWrite(e,LOW);
        digitalWrite(f,LOW);
         digitalWrite(g,HIGH);
   break;
    
  }
}
}
