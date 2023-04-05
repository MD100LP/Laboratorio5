import processing.serial.*;
Serial port;


int numero1=2; 
float[] valor = new float[numero1];

void setup()
{
  size(700, 700);
  println(Serial.list());
 // port = new Serial(this, Serial port, 9600);crea e puerto 9600 debe ser igaul en Arduino
  //port.bufferUntil('\n');
}

void draw()
{
  if (valor[1]==0) {
    background(0);
  }
  stroke(0, 255, 0, 10);
  strokeWeight(20);
 
  pushMatrix();
  translate(width/2, 10);
  rotate(HALF_PI-valor[1]*PI/180);
  line(0, 0, 0, 800);
  stroke(255, 0, 0, 50);
  line(0,valor[0]*3,0,800);
  popMatrix();

}


void serialEvent(Serial port) {
  String bufString = port.readString();
  valor = float(split(bufString, ','));
}
