#define   LEFT_MOTOR_EN   8
#define   LEFT_MOTOR_2A   7
#define   LEFT_MOTOR_1A   6
#define   RIGHT_MOTOR_EN   11
#define   RIGHT_MOTOR_1A   10
#define   RIGHT_MOTOR_2A   9
int analogPin = 1;
int val = 0;
int fish;
void foward()
{
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_EN, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, HIGH);
	digitalWrite(RIGHT_MOTOR_2A, LOW);
	delay(3000);
}
void backward()
{
        digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, HIGH);
	digitalWrite(LEFT_MOTOR_1A, LOW);

	digitalWrite(RIGHT_MOTOR_EN, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, LOW);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
        delay(1000);
}
void sqt()
{
  	digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_EN, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, LOW);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
	delay(1000);
}
void trt()
{
	digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, LOW);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_EN, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, LOW);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
	delay(1333);
}
void still()
{
        digitalWrite(LEFT_MOTOR_EN, HIGH);
	digitalWrite(LEFT_MOTOR_2A, HIGH);
	digitalWrite(LEFT_MOTOR_1A, HIGH);

	digitalWrite(RIGHT_MOTOR_EN, HIGH);
	digitalWrite(RIGHT_MOTOR_1A, HIGH);
	digitalWrite(RIGHT_MOTOR_2A, HIGH);
        delay(1500);
}
void setup()
{
	pinMode(5, INPUT);
	Serial.begin(9600);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
}
void loop()
{
fish = digitalRead(5);
if(fish == HIGH)
{
  foward(); 
}
else
backward();
delay(1000);
sqt();

}
 
