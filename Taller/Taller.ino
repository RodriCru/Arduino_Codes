#include <Servo.h>  // Incluimos la biblioteca para controlar el servo

Servo servoMotor;   // Creamos un objeto para el servo
int angulo;         // Variable para almacenar el ángulo
int led1 = 2;       // Pin donde conectaremos el primer LED
int led2 = 3;       // Pin donde conectaremos el segundo LED

void setup() {
  servoMotor.attach(9);    // Conectamos el servo al pin digital 9
  pinMode(led1, OUTPUT);    // Configuramos el pin del primer LED como salida
  pinMode(led2, OUTPUT);    // Configuramos el pin del segundo LED como salida
}

void loop() {
  // Movimiento de 0 a 180 grados del servo
  for (angulo = 0; angulo <= 180; angulo += 10) {
    servoMotor.write(angulo);  // Configuramos el ángulo del servo

    // Parpadeo de LED1
    digitalWrite(led1, HIGH);  
    delay(1);                 
    digitalWrite(led1, LOW);
    delay(1);

    // Parpadeo de LED2
    digitalWrite(led2, HIGH);  
    delay(1);                 
    digitalWrite(led2, LOW);
    delay(1);
  }

  // Movimiento de 180 a 0 grados del servo
  for (angulo = 180; angulo >= 0; angulo -= 10) {
    servoMotor.write(angulo);  // Configuramos el ángulo del servo

    // Parpadeo de LED1
    digitalWrite(led1, HIGH);  
    delay(10);                 
    digitalWrite(led1, LOW);
    delay(10);

    // Parpadeo de LED2
    digitalWrite(led2, HIGH);  
    delay(10);                 
    digitalWrite(led2, LOW);
    delay(10);
  }
}
