// EdgeForge.ino
#define SENSOR_PIN 34
#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  Serial.print("Edge Sensor Value: ");
  Serial.println(sensorValue);

  digitalWrite(LED_PIN, sensorValue > 2000 ? HIGH : LOW);

  delay(1000);
}
