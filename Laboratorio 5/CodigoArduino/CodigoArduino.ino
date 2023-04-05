#include <Servo.h>
#include <Servo.h>
int cm=0;
long distancia,duracion;
int posicion1=90;
int posicion2=-90;
Servo miServo;
#define Pecho 5
#define Ptrig 7 
void setup()
{
  Serial.begin (9600);   
 pinMode(Pecho, INPUT);  
 pinMode(Ptrig, OUTPUT); 
 miServo.attach (13);
}

void loop()
{
 digitalWrite (Ptrig,LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Ptrig,LOW);

  duracion= pulseIn(Pecho, HIGH);  
  distancia =(duracion/2)/29;    

  if (distancia >=500 || distancia 
    Serial.println("---");                 
  }
  else {
    Serial.print(distancia);               
    Serial.println("cm");                 
    digitalWrite(13,LOW);                   
  }

  if (distancia <=10 && distancia >=1){
  miServo.write(posicion1);                
  Serial.println("Obstaculo");          
  
  }
  else 
  {
    miServo.write(posicion2);
  }
  delay(400);  
}
