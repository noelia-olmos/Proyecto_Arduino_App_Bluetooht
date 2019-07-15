char _ABVAR_1_ESTADO = ' ' ;
void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  _ABVAR_1_ESTADO = Serial.read();
  if (( ( _ABVAR_1_ESTADO ) == ( 1 ) ))
  {
    __ardublockDigitalWrite(13, HIGH);
  }
  if (( ( _ABVAR_1_ESTADO ) == ( 2 ) ))
  {
    __ardublockDigitalWrite(13, LOW);
  }
}
