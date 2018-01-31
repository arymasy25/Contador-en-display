int t=1000;
void setup()
{
  for(int i=7;i<=13;i++){
    pinMode(i,OUTPUT);
    }
}
void loop() 
{
  display(1,1,1,1,1,1,0); //0
  delay(t);
  display(0,1,1,0,0,0,0); //1
  delay(t);
  display(1,1,0,1,1,0,1); //2
  delay(t);
  display(1,1,1,1,0,0,1); //3
  delay(t);
  display(0,1,1,0,0,1,1); //4
  delay(t);
  display(1,0,1,1,0,1,1); //5
  delay(t);
  display(1,0,1,1,1,1,1); //6
  delay(t);
  display(1,1,1,0,0,0,0); //7
  delay(t);
  display(1,1,1,1,1,1,1); //8
  delay(t);
  display(1,1,1,0,0,1,1); //9
  delay(t);
}
void display (int a, int b, int c, int d, int e, int f, int g)
{
  digitalWrite (7,a);   
  digitalWrite (8,b);   
  digitalWrite (9,c);
  digitalWrite (10,d);
  digitalWrite (11,e);
  digitalWrite (12,f);
  digitalWrite (13,g);
}
