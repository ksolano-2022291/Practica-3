#define botton  2 //definir para botton 1
#define botton1 3//definir para botton 2
#define LEDR    4
#define LEDG    5
#define LEDB    6

void setup() {
pinMode(botton,INPUT);//BOTTON 1 , SU ENTRADA ES PIN 2
pinMode(botton1,INPUT);// BOTTON 2, SU ENTRADA ES PIN 3
pinMode(LEDR,OUTPUT);// LEDR, SU SALIDA ES PIN 4
pinMode(LEDB,OUTPUT);// LEDB , SU SALIDA ES PIN 5
pinMode(LEDG,OUTPUT);//LEDG , SU SALIDA ES PIN 6
}

void loop() {
if(digitalRead(botton)==LOW&& digitalRead(botton1)==LOW){
digitalWrite(LEDR,HIGH);
delay(500);
digitalWrite(LEDR,LOW);
delay(500);
digitalWrite(LEDG,HIGH);
delay(500);
digitalWrite(LEDG,LOW);
delay(500);
digitalWrite(LEDB,HIGH);
delay(500);
digitalWrite(LEDB,LOW);
delay(500);
}
 
if(digitalRead(botton)==HIGH&& digitalRead(botton1)==LOW){
digitalWrite(LEDR,HIGH);
digitalWrite(LEDG,HIGH);
digitalWrite(LEDB,LOW);
delay(500);
}
if(digitalRead(botton)==LOW&& digitalRead(botton1)==HIGH){
digitalWrite(LEDG,HIGH);
digitalWrite(LEDB,HIGH);
digitalWrite(LEDR,LOW);
delay(500);

}

if(digitalRead(botton)==HIGH&& digitalRead(botton1)==HIGH){
digitalWrite(LEDG,LOW);
digitalWrite(LEDB,HIGH);
digitalWrite(LEDR,HIGH);
delay(500);

}


}
