import processing.serial.*;

Serial port;
String portname = "COM25";
int baudrate = 9600;
int value = 0;
int lastPressed;

void setup(){
  size(55,55);
  port = new Serial(this, portname, baudrate);
}

void draw(){
  if(keyPressed){
    if (millis() - lastPressed > 200) {
     port.write(key);
     print(key);
     lastPressed = millis();
    }
    else
    {
      
    }
  }
  else if (!keyPressed){
    port.write('~'); 
  }
}

