#define PROX 3
#define MID 4
#define DIST 5 
void loop() {
  proxValue = digitalRead(PROX); //take sensor values from prox sensor 
    Serial.Write(proxValue);
  midValue = digitalRead(MID); //take sensor values from MID sensor 
    Serial.Write(midValue);
  DistValue = digitalRead(DIST);
    Serial.Write(distValue);

  
 
}
