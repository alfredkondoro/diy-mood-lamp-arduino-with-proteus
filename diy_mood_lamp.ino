//Brightness of LEDs follows this equations:
//Red = sin(x)
//Green= sin(x + PI/3)
//Blue = sin(x + 2PI/3)
//For x from 0 to PI

float RGB[3];
int LdrPin = 0; //LDR in Analog Input 0 to read the ambient Light
int AmbientLight; //Variable to store the value of the ambient light
int redLed = 9;
int greenLed = 10;
int blueLed = 11;

void setup(){
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);

  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  }

void loop(){
  for(float x = 0; x<PI; x=x+0.00001){
    float red = abs(sin(x*(180/PI)));
    float green = abs(sin((x+PI/3) * (180/PI)));
    float blue = abs(sin((x + (2*PI)/3)*(180/PI)));

    analogWrite(redLed, red);
    analogWrite(greenLed, green);
    analogWrite(blueLed, blue);
    }
  }
