int button = 5;
int LED = 4;
int ForceSensor = 1;

void setup() {
 Serial.begin(9600);
 
 pinMode(button, INPUT);
}

void loop() {
int knapstatus=digitalRead(button);
if (knapstatus==LOW) {
  digitalWrite(LED,HIGH);
}
else {
  digitalWrite(LED,LOW);
}
int kraftstatus=analogRead(ForceSensor);
 if (kraftstatus<=500) {
  digitalWrite(LED,HIGH);
}
else {
  digitalWrite(LED,LOW);
}
Serial.println(analogRead(ForceSensor));
delay(80);
/*Serial.println("Hello, world!");
delay(100);*/
}
