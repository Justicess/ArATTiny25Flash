float valueA = 0;
int numChange = 0;
int Chech[7]= {1,0,1,0,1,0,1};
int Chech2[7];
int numAdd[7];
int numAdd2 = 0;
int LED = -1;
int LED2 = 1;

void setup() {
  
//Serial.begin(9600);
pinMode(3, OUTPUT);
pinMode(2, INPUT);
pinMode(0, OUTPUT);
}

void loop() {
  for (int i=0; i<7; i++){

if (Chech[i] = ( i%2==0 )){
digitalWrite(3, HIGH); // 9
delay(100);
}
else{
  digitalWrite(3, LOW); //9
  delay(100);
}
if (i == 7){
  i=0;
}
  valueA = analogRead(2);
if (valueA>300){
  numChange = 1;
}
else{
  numChange = 0;
}
Chech2[i] = numChange;
if (Chech[i] == Chech2[i]){
  numAdd2=numAdd2 + 1;
if(numAdd2 == 8){
  LED = LED * -1;
 // Serial.println(numAdd2);
  if (LED==1){
    digitalWrite(0, HIGH);
     // Serial.println("ijungti");
  }
  else{
    digitalWrite(0, LOW);
      //Serial.println("isjungti");
  }
}
}
else{
  numAdd2=0;
}
//Pabaiga
  }
}
