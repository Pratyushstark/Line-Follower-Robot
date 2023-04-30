 
#define s1 A0
#define s2 A1
#define s3 A2
#define s4 A3
#define s5 A4

void setup()
{
 pinMode(7,OUTPUT);   //LEFT_MOTOR
 pinMode(8,OUTPUT);   //LEFT_MOTOR
 pinMode(2,OUTPUT);   //RIGHT_MOTOR
 pinMode(3,OUTPUT);   //RIGHT_MOTOR
 pinMode(5,OUTPUT);  //LEFT_MOTOR_ENb
 pinMode(6,OUTPUT);  //RIGHT_MOTOR_ENa
 pinMode(s1,INPUT);    //LEFT_SENSE_1
 pinMode(s2,INPUT);    //LEFT_SENSE_2
 pinMode(s3,INPUT);    //LEFT_SENSE_3
 pinMode(s4,INPUT);    //LEFT_SENSE_4
 pinMode(s5,INPUT);//LEFT_SENSE_5
 pinMode(13,OUTPUT);
 Serial.begin(9600);
}
void showdata() {
  Serial.print(sv[0]);
  Serial.print("\t");
  Serial.print(sv[1]);
  Serial.print("\t");
  Serial.print(sv[2]);
  Serial.print("\t");
  Serial.print(sv[3]);
  Serial.print("\t");
  Serial.print(sv[4]);
  Serial.print("\t");
  Serial.println();
}
void loop()  
 while(1)
 {
  boolean sv1=digitalRead(s1);
  boolean sv2=digitalRead(s2);
  boolean sv3=digitalRead(s3);
  boolean sv4=digitalRead(s4);
  boolean sv5=digitalRead(s5);
  if((sv1==LOW)&&(sv2==LOW)&&(sv3==HIGH)&&(sv4==HIGH)&&(sv5==HIGH ))        // black WHITE (straight)
  {
    analogWrite(5,180);
    analogWrite(6,180);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
   else if((sv1==LOW)&&(sv2==LOW)&&(sv3==LOW)&&(sv4==HIGH)&&(sv5==HIGH))     // BLACK WHITE(slight RI8 turn)
  {
    analogWrite(5,150);
    analogWrite(6,120);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
  }
  else if((sv1==LOW)&&(sv2==LOW)&&(sv3==LOW)&&(sv4==LOW)&&(sv5==HIGH))    //black WHITE(double slght  RI8 turn)
  {
    analogWrite(5,150);
    analogWrite(6,100);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
  }
  else if((sv1==LOW)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==HIGH)&&(sv5==LOW))     //black_white_black(straight)
  {
    analogWrite(5,150);
    analogWrite(6,150);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
   
  }
 else if((sv1==LOW)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==HIGH)&(sv5==HIGH))    //SHARP_RIGHT_TURN_BLACK_WHITE_BLACK(90degree)
 {
  analogWrite(5,80);
  analogWrite(6,180);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
  else if((sv1==LOW)&&(sv2==LOW)&&(sv3==HIGH)&&(sv4==HIGH)&(sv5==HIGH))    //SHARP_RIGHT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,80);
  analogWrite(6,180);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
 }
   else if((sv1==LOW)&&(sv2==LOW)&&(sv3==LOW)&&(sv4==HIGH)&(sv5==HIGH))    //SHARP_RIGHT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,80);
  analogWrite(6,180);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
 }
 else if((sv1==HIGH)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==HIGH)&&(sv5==LOW))  //SHARP_LEFT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,180);
  analogWrite(6,80);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
  else if((sv1==HIGH)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==LOW)&&(sv5==LOW))  //SHARP_LEFT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,180);
  analogWrite(6,80);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
   else if((sv1==HIGH)&&(sv2==HIGH)&&(sv3==LOW)&&(sv4==LOW)&&(sv5==LOW))  //SHARP_LEFT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,180);
  analogWrite(6,80);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
  else if((sv1==HIGH)&&(sv2==LOW)&&(sv3==LOW)&&(sv4==LOW)&&(sv5==LOW))  //LEFT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,160);
  analogWrite(6,80);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
   else if((sv1==LOW)&&(sv2==LOW)&&(sv3==LOW)&&(sv4==LOW)&&(sv5==HIGH))  //RIGHT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,80);
  analogWrite(6,160);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
 }
    else if((sv1==LOW)&&(sv2==LOW)&&(sv3==HIGH)&&(sv4==HIGH)&&(sv5==LOW))  //SLIGHT_RIGHT_TURN_BLACK_WHITE_BLACK
   
 {
  analogWrite(5,180);
  analogWrite(6,120);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
     else if((sv1==LOW)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==LOW)&&(sv5==LOW))  //SLIGHT_RIGHT_TURN_BLACK_WHITE_BLACK
 {
  analogWrite(5,120);
  analogWrite(6,180);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 }
 else if((sv1==HIGH)&&(sv2==HIGH)&&(sv3==HIGH)&&(sv4==HIGH)&&(sv5==HIGH))
 {
  analogWrite(5,100);
  analogWrite(6,100);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(13,HIGH);
 

 
 }
 }
}
 


