#define RIGHT 11
#define FRONT 12
#define LEFT 10

void setup(){
    Serial.begin(9600);
    pinMode(RIGHT, INPUT);
    pinMode(FRONT, INPUT);
    pinMode(LEFT, INPUT);
}

void loop(){

    if (digitalRead(RIGHT)==HIGH){
        Serial.print(0);
    }else{
        Serial.print(1);
    }
    

    if (digitalRead(FRONT)==HIGH){
        Serial.print(0);
    }else{
        Serial.print(1);
    }
    

    if (digitalRead(LEFT)==HIGH){
        Serial.print(0);
     
    }else{
        Serial.print(1);
      
    }
    Serial.print("\n");
        
    

}