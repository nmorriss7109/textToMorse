#define dot 40
#define dash 3*dot

char in;

int led = 13;
int buzz = 11;
int sound = 500;


void setup(){
  //initialize stuffad
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  //servo code here 
  
  if (Serial.available()>0){
    in = (char)Serial.read();
  }
    
  switch (in){
  case 'a':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'b':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'c':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'd':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'e':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'f':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'g':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'h':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'i':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'j':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'k':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'l':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'm':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'n':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'o':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'p':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'q':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'r':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 's':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 't':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'u':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'v':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'w':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'x':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'y':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case 'z':
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dash);
  delay(dash);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dot);
  digitalWrite(led, HIGH);
  tone(buzz, sound, dot);
  delay(dot);
  digitalWrite(led, LOW);
  delay(dash);
  break;
  
  case ' ':
  digitalWrite(led, LOW);
  delay(7*dot);
  }

  
}
