//Codigo de Luis Cruz 
#include <Servo.h>
Servo motor;
Servo motor2;

void setup() {
  // put your setup code here, to run once:
  motor.attach(2);
  motor2.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  Abrir(); //Esta funcion abre el puente
  delay(2000); //Da un descanzo de 5 seg que permite que el puente quede abierto y el led rojo encendido
  motor.detach();
  lado1();
  delay(1000);
  lado2();
  motor.attach(2);
  delay(1000);
  Cerrar(); //Esta funcion regresa el puente a su forma original
  delay(2000);
}

void Abrir(){ //Esta funcion abre el puente
  for(int p=0;p<90;p=p+10){//Se decalara una variable con valor 0 (angulo 0°) y se detiene hasta que el valor  
    motor.write(p); // de p sea 90 (90°) con paso de 10, al servomotor se le asigna el valor de p para que 
   // motor2.write(p); // se empeize a abrir la loza del puente y cada repeticion toma un descanso de 0.07 seg
    delay(70);
  }
}

void lado1(){ //Esta funcion abre el puente
  for(int p=0;p<90;p=p+10){//Se decalara una variable con valor 0 (angulo 0°) y se detiene hasta que el valor  
    motor2.write(p); // de p sea 90 (90°) con paso de 10, al servomotor se le asigna el valor de p para que 
   // motor2.write(p); // se empeize a abrir la loza del puente y cada repeticion toma un descanso de 0.07 seg
    delay(70);
  }
}

void lado2(){ //Esta funcion abre el puente
  for(int p=90;p>=0;p=p-10){//Se decalara una variable con valor 0 (angulo 0°) y se detiene hasta que el valor  
    motor2.write(p); // de p sea 90 (90°) con paso de 10, al servomotor se le asigna el valor de p para que 
   // motor2.write(p); // se empeize a abrir la loza del puente y cada repeticion toma un descanso de 0.07 seg
    delay(70);
  }
}

void Cerrar(){ //Esta funcion regresa el puente a su forma original
  for(int p=90;p>=0;p=p-10){ //Este ciclo funciona como el anterior solo que esta vez a p se le asigna el valor 
    motor.write(p); // de 90 (90°) y esta vez va disminuyendo para que los brazos del servo bajen a su forma 
    //motor2.write(p);// de cuando empezaron (0°) y se toma un descanso por ciclo de 0.07 seg
    delay(70);
  }
}  
