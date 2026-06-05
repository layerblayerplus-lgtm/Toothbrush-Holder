#include <Servo.h>

Servo servo_3;
Servo servo_5;

void setup()
{
  pinMode(8, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);

 servo_3.attach(3);
 servo_5.attach(5);

  servo_3.write(90);
  servo_5.write(90);

  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(8) == LOW) { 
    if (digitalRead(10) == LOW) 
      {
        digitalWrite(6, HIGH);
        delay(5000);

        digitalWrite(11, HIGH);
        delay(30000);
        
        digitalWrite(11, LOW);
        digitalWrite(6, LOW);
      
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
      }
   else { digitalWrite(9, HIGH);
          delay(2500);
          digitalWrite(9, LOW);

      }

    }
  }


