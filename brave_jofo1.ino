//Motor 1 (Right)
const int ENA = 6;
const int IN1 = 8;
const int IN2 = 9;
//Motor 2 (Left)
const int IN3 = 10;
const int IN4 = 11;
const int ENB = 5;
const int on = HIGH;
const int off = LOW;

char read;
void setup()
{
  //Motor 1 (Right)
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  //Motor 2 (Left)
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    read = Serial.read();
    switch (read)
    {
      case 'f':
    //Motor 1 (Right)
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    //Motor 2 (left)
    digitalWrite(IN3, on);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
      
      case 'b':
    //Motor 1 (Right)
    digitalWrite(IN1, off);
    digitalWrite(IN2, on);
    digitalWrite(ENA, 120);
    //Motor 2 (left)
    digitalWrite(IN3, off);
    digitalWrite(IN4, on);
    digitalWrite(ENB, 120);
      break;
      
      case 'r':
    //Motor 1 (Right)
    digitalWrite(IN1, off);
    digitalWrite(IN2, on);
    digitalWrite(ENA, 120);
    //Motor 2 (left)
    digitalWrite(IN3, on);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
      
      case 'l':
    //Motor 1 (Right)
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    //Motor 2 (left)
    digitalWrite(IN3, off);
    digitalWrite(IN4, on);
    digitalWrite(ENB, 120);
      break;
      
        case 's':
    //Motor 1 (Right)
    digitalWrite(IN1, off);
    digitalWrite(IN2, off);
    digitalWrite(ENA, 120);
    //Motor 2 (left)
    digitalWrite(IN3, off);
    digitalWrite(IN4, off);
    digitalWrite(ENB, 120);
      break;
    }
  }
  
}