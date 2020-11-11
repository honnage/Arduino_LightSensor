const int pingPin = 13;
int inPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(A0, OUTPUT);
}

void loop()
{
  long duration, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  pinMode(inPin, INPUT);
  duration = pulseIn(inPin, HIGH);
  cm = microsecondsToCentimeters(duration);
  if(cm < 50){
    digitalWrite(2, HIGH);
    digitalWrite(A0, 1);
    
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
  }else{
    digitalWrite(2, LOW);
        
    digitalWrite(A0, LOW);
    digitalWrite(A0, 0);

    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
  } 
 
 
    delay(1000);

    
}
  long microsecondsToCentimeters(long microseconds)
   {
    // The speed of sound is 340 m/s or 29 microseconds per centimeter.
    // The ping travels out and back, so to find the distance of the
    // object we take half of the distance travelled.
    return microseconds / 29 / 2;
  }
 