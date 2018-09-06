int relay=8;
int pir=7;
int val=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);  
pinMode(8,OUTPUT);
pinMode(7,INPUT);
digitalWrite(7,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(7);
if(val==HIGH){
  digitalWrite(8,LOW);
  Serial.println("Relay is on");
  delay(500);
  }
  if(val==LOW){
  digitalWrite(8,HIGH);
  Serial.println("Relay is off");
  
  }
}
