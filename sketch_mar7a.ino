const int trigPin = A0;
const int echoPin = A1;
const int buzzerPin = 7;

const float thresholdDistance = 30.0;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(trigPin, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.println("Smart Distance Alert System");
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration =
      pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    Serial.println("No object detected");
    digitalWrite(buzzerPin, LOW);
  } else {
    float distance = duration * 0.0343 / 2.0;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm | Status: ");

    if (distance <= thresholdDistance) {
      digitalWrite(buzzerPin, HIGH);
      Serial.println("ALERT");
    } else {
      digitalWrite(buzzerPin, LOW);
      Serial.println("SAFE");
    }
  }

  delay(300);
}