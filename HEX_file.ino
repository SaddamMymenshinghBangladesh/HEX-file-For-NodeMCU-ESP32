// led/output on and off buttons

int t=500;
void setup() {

  pinMode(0, OUTPUT);pinMode(1, OUTPUT);pinMode(2, OUTPUT);pinMode(3, OUTPUT);pinMode(4, OUTPUT);pinMode(5, OUTPUT);pinMode(6, OUTPUT);pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);pinMode(9, OUTPUT);pinMode(10, OUTPUT);pinMode(11, OUTPUT);pinMode(12, OUTPUT);pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT); pinMode(A1, OUTPUT);pinMode(A2, OUTPUT);pinMode(A3, OUTPUT);pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT); 
}

void loop() {
//analog pin
digitalWrite(A0, HIGH);
delay(t);
digitalWrite(A0, LOW);

digitalWrite(A1, HIGH);
delay(t);
digitalWrite(A1, LOW);

digitalWrite(A2, HIGH);
delay(t);
digitalWrite(A2, LOW);

digitalWrite(A3, HIGH);
delay(t);
digitalWrite(A3, LOW);


digitalWrite(A4, HIGH);
delay(t);
digitalWrite(A4, LOW);


digitalWrite(A5, HIGH);
delay(t);
digitalWrite(A5, LOW);
//Digital pin
digitalWrite(0, HIGH);
delay(t);
digitalWrite(0, LOW);

digitalWrite(1, HIGH);
delay(t);
digitalWrite(1, LOW);

digitalWrite(2, HIGH);
delay(t);
digitalWrite(2, LOW);

digitalWrite(3, HIGH);
delay(t);
digitalWrite(3, LOW);

digitalWrite(4, HIGH);
delay(t);
digitalWrite(4, LOW);

digitalWrite(5, HIGH);
delay(t);
digitalWrite(5, LOW);

digitalWrite(6, HIGH);
delay(t);
digitalWrite(6, LOW);

digitalWrite(7, HIGH);
delay(t);
digitalWrite(7, LOW);

digitalWrite(8, HIGH);
delay(t);
digitalWrite(8, LOW);

digitalWrite(9, HIGH);
delay(t);
digitalWrite(9, LOW);

digitalWrite(10, HIGH);
delay(t);
digitalWrite(10, LOW);

digitalWrite(11, HIGH);
delay(t);
digitalWrite(11, LOW);

digitalWrite(12, HIGH);
delay(t);
digitalWrite(12, LOW);

digitalWrite(13, HIGH);
delay(t);
digitalWrite(13, LOW);

}
