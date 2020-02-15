
#define LED_PIN 2


void setup() {
  // put your setup code here, to run once:
    pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int t){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(t);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(t);                       // wait for a second
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int t=100;t>0;t--)
  {
    dimmer(100,t);
  }
}
