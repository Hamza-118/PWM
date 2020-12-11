void setup() {
  // put your setup code here, to run once:
//analogWrite(3,OUTPUT);
Serial.begin(115200);
}

void loop() {
  int x=  analogRead (A0);
  // put your main code here, to run repeatedly:
analogWrite(3,x);
Serial.println(x);
delay (20);
}
