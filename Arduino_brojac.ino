int A=0,B=1,C=2,D=3,E=4,F=5,G=6;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0;i < 7;i++) {
    pinMode(i,OUTPUT);
  }
  pinMode(7,INPUT);
  
}

void clear() {
  for(int i = 0;i < 8;i++) {
    digitalWrite(i,HIGH);
  }
}

int brojevi[10][7] = { {A,B,C,D,E,F,11},{B,C,11,11,11,11,11},{A,B,11,D,E,11,G},{A,B,C,D,G,11,11},{11,B,C,11,11,F,G},{A,11,C,D,11,F,G},{A,11,C,D,E,F,G},{A,B,C,11,11,11,11},{A,B,C,D,E,F,G},{A,B,C,D,F,G,11}};
int k = 0;
bool in,rikverc=false;
void loop() {
  in = digitalRead(7);
  if(in && rikverc == false) {
    clear();
    //////
  
    for(int i = 0; i < 7;i++) {
      if(brojevi[k][i] != 11){
        digitalWrite(brojevi[k][i],LOW);  
      }
    
    }
    delay(1000);
    k++;
    if(k == 9) {
      rikverc = true;
    }
  }
  
  if(in && rikverc != false) {
    clear();
    //////
  
    for(int i = 0; i < 7;i++) {
      if(brojevi[k][i] != 11){
        digitalWrite(brojevi[k][i],LOW);  
      }
    
    }
    delay(1000);
    k--;
    if(k == 0) {
      rikverc = false;
    }
  }
}
