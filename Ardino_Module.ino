#define button 8
byte receivedData;
int buttonState = 0;
int trigPin = 9;
int echoPin = 10;
int led = 7;


void setup() {
  
 Serial.begin(9600);
 pinMode(button, INPUT);


 pinMode(led, OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 // put your setup code here, to run once:
}


void loop() {
 delay(100);
 buttonState = digitalRead(button);
if(buttonState == HIGH)
{
Serial.print(3);
digitalWrite(led, HIGH);
}
//else


 long duration, distance;
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trigPin, LOW);
 duration=pulseIn(echoPin, HIGH);
 distance =(duration/2)/29.1;
 delay(10);

 
if((distance<=45))
 {
 digitalWrite(led, HIGH);
}
 else if(distance>45)
{
 digitalWrite(led, LOW);
 }
}
