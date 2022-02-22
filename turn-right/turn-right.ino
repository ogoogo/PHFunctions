#define IN1R 5
#define IN2R 6
#define IN1L 7
#define IN2L 8

void setup() {
  pinMode(IN1R,OUTPUT);
  pinMode(IN2R,OUTPUT);
  pinMode(IN1L,OUTPUT);
  pinMode(IN2L,OUTPUT);
}

void loop() {
  digitalWrite(IN1R,HIGH);
  digitalWrite(IN2R,LOW);
  digitalWrite(IN1L,LOW);
  digitalWrite(IN2L,HIGH);
  delay(500);
  
  digitalWrite(IN1R,HIGH);
  digitalWrite(IN2R,HIGH);
  digitalWrite(IN1L,HIGH);
  digitalWrite(IN2L,HIGH);

  delay(5000);

}
