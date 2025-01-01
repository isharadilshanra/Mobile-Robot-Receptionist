int irSensorPin = 7; // Connect the IR sensor's output
int irValue;

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as an input
}

void loop() {
  Serial.println(irValue);
  irValue = digitalRead(irSensorPin); // Read the digital output of the IR sensor

  if (irValue == HIGH) {
    Serial.println("Object detected");
  } else {
    Serial.println("No object detected");
  }
  Serial.println(irValue);
  

  delay(5000); // Delay to avoid flooding the Serial Monitor
}
