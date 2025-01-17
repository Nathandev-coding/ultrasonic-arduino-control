
int trigPin = 12; //trig Pin 12
int echoPin = 11; //echo Pin 11

void setup()
{
  Serial.begin(9600); //iniatializ serial communication
  pinMode(trigPin, OUTPUT); //set the trig pin as output
  pinMode(echoPin, INPUT); //set the echo pin as input
}

void loop()
{
  //send an ultrasonic signal
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  //read the time it takes signal to return
  long duration = pulseIn(echoPin, HIGH);
  
  //calculate the distance in cm (speed of son 0.346 m/s)
  float distance = (duration * 0.034) / 2;
  
  //display the distance in de serial monitor
  Serial.print("distance:");
  Serial.println(distance);
  delay(1000);//Wait 1 second before the next measurement
  
  //You can adjust this code according to your needs.
  
  
  
}