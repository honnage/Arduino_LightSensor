int  val = 0 ;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
 

}

void loop()
{
  
  val = analogRead(5);    
  Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  Serial.println(val); // พิมพ์ค่าของตัวแปร val
  if(val >= 400){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
 
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);

    delay(1000); // Wait for 100 millisecond(s)

    digitalWrite(13, LOW);
    delay(100); // Wait for 100 millisecond(s)

    digitalWrite(12, LOW);
    delay(100); // Wait for 100 millisecond(s)
 
    digitalWrite(11, LOW);
    delay(100); // Wait for 100 millisecond(s)

    digitalWrite(10, LOW);
    delay(100); // Wait for 100 millisecond(s)

    digitalWrite(4, LOW);
    delay(100); // Wait for 100 millisecond(s)

    digitalWrite(3, LOW);
    delay(100); // Wait for 100 millisecond(s)
 
    digitalWrite(2, LOW);
    delay(100); // Wait for 100 millisecond(s)

    digitalWrite(7, LOW);
    delay(100); // Wait for 100 millisecond(s)

    delay(100); // Wait for 100 millisecond(s)
  }
    
}
