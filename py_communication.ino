int LED=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  digitalWrite(LED, LOW);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    if(Serial.read()=='s')
    {
      digitalWrite(LED, HIGH);
      delay(2000);
    }
    else
    {
      digitalWrite(LED, LOW);
    }
  }

}
