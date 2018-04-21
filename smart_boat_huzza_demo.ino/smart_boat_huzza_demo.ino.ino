


void setup() {
  pinMode(0, OUTPUT);   // Yellow LED
  pinMode(2, OUTPUT);   // Blue LED
  pinMode(4, OUTPUT);   // Green LED
  pinMode(5, OUTPUT);   // Green LED
  pinMode(12, OUTPUT);  // Motor controller A-IA: Left side motor forward
  pinMode(13, OUTPUT);  // Motor controller A-IB: Left side motor reverse
  pinMode(14, OUTPUT);  // Motor controller B-IA: Right side motor forward
  pinMode(16, OUTPUT);  // Motor controller B-IB: Right side motor reverse
}

void loop() {
                            
  digitalWrite(2, HIGH);     // intialize to off and drifting
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(16, LOW);

  digitalWrite(0, LOW);    // yellow LED blink
  delay(300);
  digitalWrite(0, HIGH);     // off and drifting 1 sec
  delay(700);
  
  digitalWrite(2, LOW);    // blue LED blink
  delay(300);
  digitalWrite(2, HIGH);     // off and drifting 1 sec
  delay(700);
  
  digitalWrite(4, LOW);    // green LED 1 blink
  delay(300);
  digitalWrite(4, HIGH);     // off and drifting 1 sec
  delay(700);

  digitalWrite(5, LOW);    // yellow LED blink
  delay(300);
  digitalWrite(5, HIGH);     // off and drifting 1 sec
  delay(700);
  
  digitalWrite(0, LOW);    // yellow LED blink
  delay(300);
  digitalWrite(0, HIGH);     // off and drifting 1 sec
  delay(700);
  
  digitalWrite(2, LOW);    // blue LED blink
  delay(300);
  digitalWrite(2, HIGH);     // off and drifting 1 sec
  delay(700);
  
  digitalWrite(4, LOW);    // green LED 1 blink
  delay(300);
  digitalWrite(4, HIGH);     // off and drifting 1 sec
  delay(700);

  digitalWrite(5, LOW);    // yellow LED blink
  delay(300);
  digitalWrite(5, HIGH);     // off and drifting 1 sec
  delay(700);
  
  // ________________ Going forward now
  
  digitalWrite(12, HIGH);   // forward 1 sec
  digitalWrite(14, LOW);    // use only one motor to save power
  digitalWrite(0, LOW);    // green LED 2 blink
  delay(300);
  digitalWrite(0, HIGH);
  delay(700);
  
  digitalWrite(2, LOW);    // blue LED blink
  delay(300);
  digitalWrite(2, HIGH);     // forward 1 sec
  delay(700);
  
  digitalWrite(4, LOW);    // blue LED blink
  delay(300);
  digitalWrite(4, HIGH);     // forward 1 sec
  delay(700);
  
  digitalWrite(12, LOW);   // forward 1 sec
  digitalWrite(14, HIGH);  
  digitalWrite(5, LOW);    // yellow LED blink
  delay(300);
  digitalWrite(5, HIGH);     // forward 1 sec
  delay(700);
  
  digitalWrite(12, HIGH);   // forward 1 sec
  digitalWrite(14, LOW);  
  digitalWrite(2, LOW);    // blue LED blink
  delay(300);
  digitalWrite(2, HIGH);     // forward 1 sec
  delay(700);
  
  digitalWrite(12, LOW);   // forward 1 sec
  digitalWrite(14, HIGH);  
  digitalWrite(4, LOW);    // green LED 1 blink
  delay(300);
  digitalWrite(4, HIGH);     // forward 1 sec 
  delay(700);
  
  digitalWrite(12, HIGH);   // forward 1 sec
  digitalWrite(14, LOW);    // use only one motor to save power
  digitalWrite(0, LOW);    // green LED 2 blink
  delay(300);
  digitalWrite(0, HIGH);
  delay(700);
  
  digitalWrite(2, LOW);    // blue LED blink
  delay(300);
  digitalWrite(2, HIGH);     // forward 1 sec
  delay(700);
  
  digitalWrite(4, LOW);    // blue LED blink
  delay(300);
  digitalWrite(4, HIGH);     // forward 1 sec
  delay(700);
    
  // ________________ Drifting now
  
  digitalWrite(12, LOW);     // drift 1 sec 
  digitalWrite(14, LOW);
  digitalWrite(5, LOW);    // LED blink
  delay(300);
  digitalWrite(5, HIGH);
  delay(700);
  
  digitalWrite(0, LOW);    // LED blink
  delay(300);
  digitalWrite(0, HIGH);     // drift 1 sec 
  delay(700);
  
  // ________________ Drifting now
  
  digitalWrite(13, HIGH);   // reverse 1 sec
  digitalWrite(16, LOW);
  digitalWrite(2, LOW);    // LED blink
  delay(300);
  digitalWrite(2, HIGH);
  delay(700);
  
  digitalWrite(13, LOW);   // reverse 1 sec
  digitalWrite(16, HIGH);
  digitalWrite(4, LOW);    // LED blink
  delay(300);
  digitalWrite(4, HIGH);   // reverse 1 sec
  delay(700);
  
  digitalWrite(13, HIGH);   // reverse 1 sec
  digitalWrite(16, LOW);
  digitalWrite(5, LOW);    // LED blink
  delay(300);
  digitalWrite(5, HIGH);   // reverse 1 sec
  delay(700);
  
  digitalWrite(13, HIGH);   // reverse 1 sec
  digitalWrite(16, LOW);
  digitalWrite(2, LOW);    // LED blink
  delay(300);
  digitalWrite(2, HIGH);
  delay(700);
  
}
