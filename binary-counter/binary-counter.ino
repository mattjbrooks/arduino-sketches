int pinArray[5] = { 13, 12, 7, 4, 2 };

void setup() {
  int i;
  for (i = 0; i < 5; i += 1) {
    pinMode(pinArray[i], OUTPUT);
  }
}

void loop() {
  int i, j, binaryValue;
  for (i = B0; i <= B11111; i += B1) {
    binaryValue = i;
    for (j = 0; j < 5; j += 1) {
      if (binaryValue & 1) {
        digitalWrite(pinArray[j], HIGH);
      } else {
        digitalWrite(pinArray[j], LOW);
      }
      binaryValue = binaryValue >> 1;
    }
    delay(2500);
  }
}
