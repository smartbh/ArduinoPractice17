

void setup() 
{
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //IN2
  pinMode(9, OUTPUT); //IN2
  pinMode(10, OUTPUT); //ENA
}

int speed =100;

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);

  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  //digitalWrite(10, HIGH);
  analogWrite(10, speed);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);
}
