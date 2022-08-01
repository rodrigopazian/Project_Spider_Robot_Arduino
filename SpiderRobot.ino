//inclui a biblioteca do servo:
#include <Servo.h>
//Declaração dos servos:
Servo Servo1A;
Servo Servo2A;
Servo Servo3A;
Servo Servo4A;
Servo Servo5A;
Servo Servo6A;
Servo Servo1B;
Servo Servo2B;
Servo Servo3B;
Servo Servo4B;
Servo Servo1C;
Servo Servo2C;
Servo Servo3C;
Servo Servo4C;
Servo Servo5C;
Servo Servo6C;

//Declaração variavel porta digital de alimentação:
int pinodigital = 13;
// the setup routine runs once when you press reset:
void setup() {
  //Acoplando Servos aos pinos:
  Servo1A.attach(2);
  Servo2A.attach(3);
  Servo3A.attach(4);
  Servo4A.attach(5);
  Servo5A.attach(6);
  Servo6A.attach(7);
  Servo1B.attach(8);
  Servo2B.attach(9);
  Servo3B.attach(10);
  Servo4B.attach(11);
  Servo1C.attach(12);
  Servo2C.attach(13);
  Servo3C.attach(14);
  Servo4C.attach(15);
  Servo5C.attach(16);
  Servo6C.attach(17);
   
  //Acoplando saída digital de alimentação:
  pinMode(pinodigital, OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  /*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
 //Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
  // print out the value you read:
Serial.println(voltageCh1);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
  // print out the value you read:
Serial.println(voltageCh2);
  //FIM
  //Servos estado inicial:
if ((voltageCh1<1.5)&&(2.5<voltageCh2<3.5)){ //ifestadoinicial
  Servo1A.write(90);
  Servo2A.write(90);
  Servo3A.write(90);
  Servo4A.write(90);
  Servo5A.write(90);
  Servo6A.write(90);
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
//desliga motores
  digitalWrite(pinodigital, LOW);
}//endifestadoinicial

else { //elsemovimentofrente
//liga motores
digitalWrite(pinodigital, HIGH);
if ((voltageCh1>=4)&&(2.5<voltageCh2<3.5)) { //ifmovimentofrente
    //Servos movimento frente
while ((voltageCh1>=4)&&(2.5<voltageCh2<3.5)) { //whilemain
 //F0  
    Servo1A.write(105);//indo
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
 //F1   
    Servo1A.write(120);//indo
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(105);//indo
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
 //F2
    Servo1A.write(105);//voltando
    Servo2A.write(90);//parado
    Servo3A.write(105);//indo
    Servo4A.write(90);//parado
    Servo5A.write(120);//indo
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
 //F3   
    Servo1A.write(90);//voltando
    Servo2A.write(90);//parado
    Servo3A.write(120);//indo
    Servo4A.write(105);//indo
    Servo5A.write(105);//voltando
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
while ((voltageCh1>=4)&&(2.5<voltageCh2<3.5)) { //whilesubmain
  //F4
    Servo1A.write(75);//voltando
    Servo2A.write(105);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F5   
    Servo1A.write(60);//voltando
    Servo2A.write(120);//indo
    Servo3A.write(90);//voltando
    Servo4A.write(105);//voltando
    Servo5A.write(75);//voltando
    Servo6A.write(105);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F6   
    Servo1A.write(75);//indo
    Servo2A.write(105);//voltando
    Servo3A.write(75);//voltando
    Servo4A.write(90);//voltando
    Servo5A.write(60);//voltando
    Servo6A.write(120);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F7   
    Servo1A.write(90);//indo
    Servo2A.write(90);//voltando
    Servo3A.write(60);//voltando
    Servo4A.write(75);//voltando
    Servo5A.write(75);//indo
    Servo6A.write(105);//voltando
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F8   
    Servo1A.write(105);//indo
    Servo2A.write(75);//voltando
    Servo3A.write(75);//indo
    Servo4A.write(60);//voltando
    Servo5A.write(90);//indo
    Servo6A.write(90);//voltando
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F9   
    Servo1A.write(120);//indo
    Servo2A.write(60);//voltando
    Servo3A.write(90);//indo
    Servo4A.write(75);//indo
    Servo5A.write(105);//indo
    Servo6A.write(75);//voltando
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F10   
    Servo1A.write(105);//voltando
    Servo2A.write(75);//indo
    Servo3A.write(105);//indo
    Servo4A.write(90);//indo
    Servo5A.write(120);//indo
    Servo6A.write(60);//voltando
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F11  
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(120);//indo
    Servo4A.write(105);//indo
    Servo5A.write(105);//voltando
    Servo6A.write(75);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
 //Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
//FIM
}//endwhilesubmain
}//endwhilemain
    //Movimento de parada
  //F12
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F13 
    Servo1A.write(90);//parado
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
}//endifmovimentofrente

else { //elsemovimentosquerda
if ((voltageCh1<=4)&&(voltageCh2<2.5)) { //ifmovimentoesquerda
    //Servos movimento esquerda parado
while ((voltageCh1<=4)&&(voltageCh2<2.5)) { //whilemain
 //E0  
    Servo1A.write(0);
    Servo2A.write(0);
    Servo3A.write(0);
    Servo4A.write(0);
    Servo5A.write(0);
    Servo6A.write(0);
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);

//Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
//FIM
}//endwhilemain
    //Movimento de parada
  //E12
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//indo
  //F13 
    Servo1A.write(90);//parado
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
    
}//endifmovimentoesquerda
else { //elsemovimentodireita
if ((voltageCh1<=4)&&(voltageCh2>3.5)) { //ifmovimentoedireita
    //Servos movimento direita parado
while ((voltageCh1<=4)&&(voltageCh2>3.5)) { //whilemain
 //D0  
    Servo1A.write(0);
    Servo2A.write(0);
    Servo3A.write(0);
    Servo4A.write(0);
    Servo5A.write(0);
    Servo6A.write(0);
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);

//Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
//FIM
}//endwhilemain
    //Movimento de parada
  //F12
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//indo
  //F13 
    Servo1A.write(90);//parado
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
    
}//endifmovimentodireita
else { //elsemovimentoesquerda+frente
if ((voltageCh1>=4)&&(voltageCh2<2.5)) { //ifmovimentoeesquerda+frente
    //Servos movimento esquerda frente
while ((voltageCh1>=4)&&(voltageCh2<2.5)) { //whilemain
 //EF0  
    Servo1A.write(0);
    Servo2A.write(0);
    Servo3A.write(0);
    Servo4A.write(0);
    Servo5A.write(0);
    Servo6A.write(0);
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);

//Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
//FIM
}//endwhilemain
    //Movimento de parada
  //EF12
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //F13 
    Servo1A.write(90);//parado
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);  
}//endifmovimentoesquerda+frente
else { //elsemovimentodireita+frente
if ((voltageCh1>=4)&&(voltageCh2>3.5)) { //ifmovimentodireita+frente
    //Servos movimento direita frente
while ((voltageCh1>=4)&&(voltageCh2>3.5)) { //whilemain
 //EF0  
    Servo1A.write(0);
    Servo2A.write(0);
    Servo3A.write(0);
    Servo4A.write(0);
    Servo5A.write(0);
    Servo6A.write(0);
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);

//Rotina de leitura das portas analogicas de entrada de controle remoto
  //INICIO
  // read the input on analog pin 0:
int controlValueCh1 = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh1 = controlValueCh1 * (5.0 / 1023.0);
int controlValueCh2 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
float voltageCh2 = controlValueCh2 * (5.0 / 1023.0);
//FIM
}//endwhilemain
    //Movimento de parada
  //EF12
    Servo1A.write(90);//voltando
    Servo2A.write(90);//indo
    Servo3A.write(105);//voltando
    Servo4A.write(120);//indo
    Servo5A.write(90);//voltando
    Servo6A.write(90);//indo
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
  //EF13 
    Servo1A.write(90);//parado
    Servo2A.write(90);//parado
    Servo3A.write(90);//parado
    Servo4A.write(90);//parado
    Servo5A.write(90);//parado
    Servo6A.write(90);//parado
  Servo1B.write(45);
  Servo2B.write(45);
  Servo3B.write(45);
  Servo4B.write(45);
  Servo1C.write(0);
  Servo2C.write(0);
  Servo3C.write(0);
  Servo4C.write(0);
  Servo5C.write(0);
  Servo6C.write(0);
}//endifmovimentodireita+frente
}//endelsemovimentodireita+frente
}//endelsemovimentoesquerda+frente
}//endelsemovimentodireita
}//endelsemovimentoesquerda
}//endelsemovimentofrente
}//endloop
