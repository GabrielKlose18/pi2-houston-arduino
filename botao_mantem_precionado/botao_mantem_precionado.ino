const int player1 = 10;
const int player2 = 2;
const int opcaoA = 3;
const int opcaoB = 4;
const int opcaoC = 5;
const int opcaoD = 6;
const int ledPlayer1 = 8;
const int ledPlayer2 = 9;

void setup() { 
  Serial.begin(9600);

  pinMode(player1, INPUT); 
  pinMode(player2, INPUT); 
  pinMode(opcaoA, INPUT); 
  pinMode(opcaoB, INPUT); 
  pinMode(opcaoC, INPUT); 
  pinMode(opcaoD, INPUT); 
  pinMode(ledPlayer1, OUTPUT);
  pinMode(ledPlayer2, OUTPUT);
  
  
}

void loop() { 
  

  if(digitalRead(player1)==HIGH) {
    Serial.println(1); 
    Serial.flush();
    digitalWrite(ledPlayer1, HIGH); 
    delay(3000);
  }else{ 
    digitalWrite(ledPlayer1, LOW); 
    Serial.flush();
  } 

  if(digitalRead(player2)==HIGH) {
    Serial.println(2); 
    Serial.flush();
    digitalWrite(ledPlayer2, HIGH); 
    
    delay(3000);
  }else{ 
    digitalWrite(ledPlayer2, LOW); 
  } 

  if(digitalRead(opcaoA)==HIGH) {
    Serial.println(3); 
    Serial.flush();    
    delay(3000);
  }
  
  if(digitalRead(opcaoB)==HIGH) {
    Serial.println(4); 
    Serial.flush();    
    delay(3000);
  }
  
  if(digitalRead(opcaoC)==HIGH) {
    Serial.println(5); 
    Serial.flush();    
    delay(3000);
  }
  
  if(digitalRead(opcaoD)==HIGH) {
    Serial.println(6); 
    Serial.flush();    
    delay(3000);
  }
  
}
