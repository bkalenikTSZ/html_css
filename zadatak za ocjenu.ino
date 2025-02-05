int led1=13;
int led2=12;
int led3=11;
int led4=10;
int xPin=A1;
int yPin=A0;
int buttonPin=2;
int xPosition=0;
int yPosition=0;
int button=0;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  digitalWrite(led1,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led2,LOW);
  xPosition=analogRead(xPin);
  yPosition=analogRead(yPin);
  button=analogRead(buttonPin);
  if (xPosition==0 && xPosition==0){
    digitalWrite(led1,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
  }
  if (xPosition==0 && xPosition<=450){
    digitalWrite(led1,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
  }
  if (xPosition>=600 && xPosition<=1023){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  if (yPosition==0 && yPosition<=450){
    digitalWrite(led1,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,LOW);
  }
  if (yPosition>=600 && yPosition<=1023){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
  }
  
  Serial.print("|X:");
  Serial.print(xPosition);
  Serial.print("|Y:");
  Serial.print(yPosition);
  Serial.print("|BUTTON:");
  Serial.print(button);
  delay(50);
}
