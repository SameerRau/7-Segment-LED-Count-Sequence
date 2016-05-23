/*
Jessie Fraser
Sameer Rau
Assignment 3

Objective: Students must write an Arduino sketch to create the count sequence 
on the 7-Segment LED module.	
*/

void setup() {
  //initializing pins that are connected to the LED display
    for(int i =2; i<10; i++) {
    pinMode(i, OUTPUT);  
  }
  
  //enable the serial monitor.
  Serial.begin(9600);
}

//displays the number '0' on the LED.
void numberZero() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  //print the number '0' to the serial monitor.
  Serial.println("0");
}

//displays the number '1' on the LED.
void numberOne() {
  
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  //print the number '1' to the serial monitor.
  Serial.println("1");
}

//displays the number '2' on the LED.
void numberTwo() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '2' to the serial monitor,
  Serial.println("2");
}

//displays the number '3' on the LED.
void numberThree() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '3' to the serial monitor.
  Serial.println("3");
}

//displays the number '4' on the LED.
void numberFour() {
  
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '4' to the serial monitor.
  Serial.println("4");
}

//displays the number '5' on the LED.
void numberFive() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '5' to the serial monitor.
  Serial.println("5");
}

//displays the number '6' on the LED.
void numberSix() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '6' to the serial monitor.
  Serial.println("6");
}

//displays the number '7' on the LED.
void numberSeven() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  //print the number '7' to the serial monitor.
  Serial.println("7");
}

//displays the number '8' on the LED.
void numberEight() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '8' to the serial monitor.
  Serial.println("8");
}

//displays the number '9' on the LED.
void numberNine() {
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  //print the number '9' to the serial monitor.
  Serial.println("9");
}

//loops through each number, with a half second break between each one.
void loop() { 
  
  numberZero();
  delay(500);
  numberOne(); 
  delay(500);
  numberTwo();
  delay(500);
  numberThree(); 
  delay(500);
  numberFour();
  delay(500);
  numberFive(); 
  delay(500);
  numberSix();
  delay(500);
  numberSeven(); 
  delay(500);
  numberEight();
  delay(500);
  numberNine(); 
  delay(500);
}
  
