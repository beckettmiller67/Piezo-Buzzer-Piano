int c = A1;
int d = A2;
int e = A3;
int f = A4;
int g = A5;
int piezo = 13;
void setup() {
//note idetntification and allows it to work as a button
  Serial.begin(9600);
  pinMode(c, INPUT_PULLUP);
  pinMode(d, INPUT_PULLUP);
  pinMode(e, INPUT_PULLUP);
  pinMode(f, INPUT_PULLUP);
  pinMode(g, INPUT_PULLUP);
  pinMode(piezo, OUTPUT);
}
void loop() {
//c4 note
  int cValue = analogRead(c);//identifies what note is being played
  if (cValue<50){
      tone(piezo, 262);//identifies tone
      delay(100);//tone delay to identify if note is still being played
      noTone(piezo);//stops note if found button is unused     
  }
//d4 note
    int dValue = analogRead(d);
  if (dValue<50){
      tone(piezo, 293);
      delay(100);
      noTone(piezo);      
  }
//e4 note
   int eValue = analogRead(e);
  if (eValue<50){
      tone(piezo, 329);
      delay(100);
      noTone(piezo);      
  }
//f4 note
    int fValue = analogRead(f);
  if (fValue<50){
      tone(piezo, 349);
      delay(100);
      noTone(piezo);      
  }
//g4 note
  int gValue = analogRead(g);
  if (gValue<50){
      tone(piezo, 392);
      delay(100);
      noTone(piezo);      
  }}
