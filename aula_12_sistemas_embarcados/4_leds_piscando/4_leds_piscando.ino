#define led1 8
#define led2 9
#define led3 10
#define led4 11

void setup() {
  pinMode(led1 ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led3 ,OUTPUT);
  pinMode(led4 ,OUTPUT);

}

void loop() {
  digitalWrite(led1 , 1);
  digitalWrite(led2 , 1);
  digitalWrite(led3 , 1);
  digitalWrite(led4 , 1);
  delay(1000);
  digitalWrite(led1 , 0);
  digitalWrite(led2 , 0);
  digitalWrite(led3 , 0);
  digitalWrite(led4 , 0);
  delay(1000);

}
