#define frequency 5000

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
 
//  TCCR0A = _BV(COM2A0) |_BV(WGM01) |_BV(WGM00);//enable port timer2A at toggle at compare, set to CTC mode
  TCCR0A = _BV(COM0A0) |_BV(WGM01) |_BV(WGM00);

  TCCR0B = (1 << CS01);    // 8 prescaler 
  TCCR0B |= (1 << WGM12);   // CTC mode


  OCR0A = 100;


}

void setFrequency(int desiredFrequency){
     int reg = (desiredFrequency/ 1) -1;
      OCR0A = reg;
}

void loop() {
  // put your main code here, to run repeatedly:
  int x =3;
  x++;
}
