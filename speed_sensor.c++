// def pins and libraries
float circumference = 0.220; // circumfrance in meters, measured
const int sensorPin = A0; //the pin that the data pin on the Hall Sensor is attached to
int sensorValue = 0; // must initalize variables to set type
int rotations = 0; 
unsigned long startTime = 0;
const unsigned long runDuration = 10000;

void setup() {
  //classis setup, also initalizing the time
  Serial.begin(9600);
  startTime = millis();

}

void loop() {
  //running for set duration
  if (millis() - startTime < runDuration) {
    //read sensor
    sensorValue = analogRead(sensorPin); 

    if (sensorValue > 516) { // threshold value, can be changed. will change depending on strength of magnet 
      ++rotations;
      delay(1000);
     }

    } else {
    // Once the set duration has passed, calculate the total distance traveled:
    float final_distance = rotations * circumference;
    float speed = final_distance / (millis() / 60000); //distance over time, with time being converted from miliseconds to minutes

    // Print the distance to the Serial Monitor:
    Serial.print("\nDistance: ");
    Serial.print(final_distance);
    Serial.println(" meters");

    //print speed
    Serial.print("\nSpeed: ");
    Serial.print(speed);
    Serial.println(" meters");

    // Reset for the next measurement period
    rotations = 0;
    startTime = millis();
    }
  }
