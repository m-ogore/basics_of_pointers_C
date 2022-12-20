
int* test;
int t;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
h1();
Serial.println("pointer value in between/outside functions after h1");
Serial.println(*test);
h2(test);
Serial.println("pointer value in between/outside functions after h2");
Serial.println(*test);

}

void h1(){
  
  t=1;
  test=&t;
  Serial.print("value of *test in function h1 is :");
  Serial.println(*test);
}


void h2(int* test){
  //*test = &te;
  Serial.print("value of *test before change in h2 is:");
  Serial.println(*test);
  Serial.println(*test);
  t=3;
  
  //test=&t; this is unnecessary
  Serial.print("value of *test after change in h2 is:");
  Serial.println(*test);
}
  
