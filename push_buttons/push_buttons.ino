void setup() {
 Serial.begin(9600);
 pinMode(A1 ,INPUT);
 pinMode(3,OUTPUT);


}

void loop() {
  int x=analogRead(A1);
  Serial.println(x);
if(x==HIGH){
  Serial.println(x);
  digitalWrite(3,1);
}
else if(x==LOW){
  Serial.print(x);
  digitalWrite(3,0);
}
delay(100);

}
