int RED1 = 7;  
int YEL1 = 6;
int GRE1 = 5;
int TURN1 = 8;


int light_val = 450;
int LAMP = 13;
int light = 0;


int RED2 = 4;
int YEL2 = 3;
int GRE2 = 9;
int TURN2 = 2;


void setup()
{
  pinMode(RED1, OUTPUT); 
  pinMode(YEL1, OUTPUT);
  pinMode(GRE1, OUTPUT);
  pinMode(TURN1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(YEL2, OUTPUT);
  pinMode(GRE2, OUTPUT);
  pinMode(TURN2, OUTPUT);
  pinMode(LAMP, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}


void loop()
{
  light = analogRead(A1); 
  if (light <=light_val){ 
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);


  digitalWrite(RED1, HIGH); 
  digitalWrite(RED2, HIGH);
  delay(5000); 
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  digitalWrite(RED1, LOW);
  digitalWrite(TURN1, HIGH);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  delay(5000);
  digitalWrite(TURN1, LOW);
  digitalWrite(GRE1, HIGH);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  delay(5000);
  digitalWrite(GRE1, LOW);
  digitalWrite(YEL1, HIGH);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  delay(5000);
  digitalWrite(YEL1, LOW);
  digitalWrite(RED1, HIGH);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  delay(5000);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  digitalWrite(TURN2, HIGH); 
  digitalWrite(RED2, LOW);
  delay(5000);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  digitalWrite(GRE2, HIGH);
  digitalWrite(TURN2, LOW);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  delay(5000);
  digitalWrite(GRE2, LOW);
  digitalWrite(YEL2, HIGH);
  delay(5000);
  light = analogRead(A1);
  if (light <=light_val){
    digitalWrite(LAMP, HIGH);
  }
  else{
    digitalWrite(LAMP, LOW);
  }
  Serial.println(light);
  digitalWrite(YEL2, LOW);
  digitalWrite(RED2, HIGH); 
 
}





