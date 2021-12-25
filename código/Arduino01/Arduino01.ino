#include <Servo.h>
#define botao1 4
#define botao2 13
#define botao3 2
#define botao4 7
#define velocidade1 5
#define velocidade2 3
#define LDR A5
#define LED 6
int anguloDireita = 45;
int anguloEsquerda = 135;
Servo s;
int valorLido; 
void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  s.attach(8);
  s.write(90);
pinMode(botao1, INPUT);
pinMode(botao2, INPUT);
pinMode(botao3, INPUT);
pinMode(botao4, INPUT);
pinMode(velocidade1, OUTPUT);
pinMode(velocidade2, OUTPUT);
}
void loop() {
  valorLido = analogRead(LDR);   
  Serial.println(valorLido);
  if(valorLido < 500) {
    analogWrite(LED, 255);
}
  else {
    digitalWrite(LED, LOW);
}
  if (digitalRead(botao1) == 1){
  analogWrite(A0, 255);
  analogWrite(A1, 0);
  analogWrite(A2, 255);
  analogWrite(A3, 0);
  analogWrite(velocidade1, 255);
  analogWrite(velocidade2, 255);
}
else {
  analogWrite(A0, 0);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  analogWrite(velocidade1, 0);
  analogWrite(velocidade2, 0);
}
  if (digitalRead(botao2) == 1){
  analogWrite(A0, 0);
  analogWrite(A1, 255);
  analogWrite(A2, 0);
  analogWrite(A3, 255);
  analogWrite(velocidade1, 255);
  analogWrite(velocidade2, 255);
  }
else {
  analogWrite(A0, 0);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  analogWrite(A3, 0);
  analogWrite(velocidade1, 0);
  analogWrite(velocidade2, 0);
}
  if (digitalRead(botao4) == 1){
  s.write(anguloEsquerda);
  }
  else if (digitalRead(botao3) == 1){
  s.write(anguloDireita);
  }
  else {
  s.write(90);
}
}