
int led=13;
int button=4;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button,INPUT);
}
void loop()
{
  if(digitalRead(button==HIGH))
     {digitalWrite(led,HIGH);
     delay(500);
     digitalWrite(led,LOW);
     delay(500);}
     else
     {digitalWrite(led,LOW);}
     }