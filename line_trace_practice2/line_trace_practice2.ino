
#define IN1R 5
#define IN2R 6
#define IN1L 7
#define IN2L 8
#define RIGHT 3
#define LEFT 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RIGHT,INPUT);
  pinMode(LEFT,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(RIGHT)==LOW && digitalRead(LEFT)==LOW){
        Serial.print("stop\n");
    }else if(digitalRead(RIGHT)==LOW && digitalRead(LEFT)==HIGH){
        Serial.print("left\n");
    }else if(digitalRead(RIGHT)==HIGH && digitalRead(LEFT)==LOW){
        Serial.print("right\n");
    }else {
        Serial.print("straight\n");

    }

  
    

  
}
