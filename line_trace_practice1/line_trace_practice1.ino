
#define IN1R 7
#define IN2R 8
#define IN1L 5
#define IN2L 6
#define RIGHT 4
#define LEFT 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RIGHT,INPUT);
  pinMode(LEFT,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(RIGHT)==LOW && digitalRead(LEFT)==LOW){
        digitalWrite(IN1R, HIGH);
        digitalWrite(IN2R, HIGH);
        digitalWrite(IN1L, HIGH);
        digitalWrite(IN2L, HIGH);
      
    }else if(digitalRead(RIGHT)==LOW && digitalRead(LEFT)==HIGH){
        digitalWrite(IN1R, HIGH);
        digitalWrite(IN2R, LOW);
        digitalWrite(IN1L, LOW);
        digitalWrite(IN2L, HIGH);
        delay(50);
    }else if(digitalRead(RIGHT)==HIGH && digitalRead(LEFT)==LOW){
        digitalWrite(IN1R, LOW);
        digitalWrite(IN2R, HIGH);
        digitalWrite(IN1L, HIGH);
        digitalWrite(IN2L, LOW);
        delay(50);
    }else {
        digitalWrite(IN1R, LOW);
        digitalWrite(IN2R, HIGH);
        digitalWrite(IN1L, LOW);
        digitalWrite(IN2L, HIGH);
        delay(100);

    }

  
    

  
}
