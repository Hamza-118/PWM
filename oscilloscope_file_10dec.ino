int pwm = 11;
float a;
int x;
void setup() {
pinMode(pwm,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int duty_cycle;
for(duty_cycle=0 ; duty_cycle<=255; duty_cycle++){
analogWrite(pwm,duty_cycle);
delay(100);
x = analogRead(A0);
a=(5/1023.0)*x;
Serial.println(a);
}
}
