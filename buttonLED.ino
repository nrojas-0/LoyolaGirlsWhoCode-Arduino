int led_Pin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_Pin, OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == LOW){
    digitalWrite(led_Pin, HIGH);
  }
  else{
    digitalWrite(led_Pin, LOW);
  }
}
