const int buttonPinSemCapa = 7;
const int buttonPinComCapa = 6;
const int ledPinSemCapa = 8;
const int ledPinComCapa = 9;

void setup() { 
  Serial.begin(9600);

  pinMode(buttonPinSemCapa, INPUT); 
  pinMode(buttonPinComCapa, INPUT); 
  pinMode(ledPinSemCapa, OUTPUT);
  pinMode(ledPinComCapa, OUTPUT);
  
}

void loop() { 
  if(digitalRead(buttonPinSemCapa)==HIGH) {
    Serial.println("LEFT"); 
    digitalWrite(ledPinSemCapa, HIGH); 
    delay(3000);
  }else{ 
    digitalWrite(ledPinSemCapa, LOW); 
  } 

  if(digitalRead(buttonPinComCapa)==HIGH) {
    Serial.println("RIGHT"); 
    digitalWrite(ledPinComCapa, HIGH); 
    delay(3000);
  }else{ 
    digitalWrite(ledPinComCapa, LOW); 
  } 
}
