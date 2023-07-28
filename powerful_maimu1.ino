int led1=7;
int led2=8;
int led4=4;
int led6=2 ;
int sw1=9;
int sw2=12;
void setup()
{
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(9,INPUT);
  pinMode(12,INPUT);
}

void loop()
{
  if(digitalRead(9))
      {digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
      }
      else{
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
      }
      if(digitalRead(12))
     {digitalWrite(4,HIGH);
      digitalWrite(2,HIGH);
     }
     else{
       digitalWrite(4,LOW);
       digitalWrite(2,LOW);
     }
       
}