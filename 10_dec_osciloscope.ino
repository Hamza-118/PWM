int pwm= 11;
void setup() {
  // put your setup code here, to run once:
pinMode(pwm,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<=255; i++){
  analogWrite (pwm,i);
  Serial.println(i);
  delay(0.5);
}
for (int j=255; j>=0; j--)
{
  analogWrite(pwm,j);
  Serial.println(j);
  delay(0.5);
}
}

