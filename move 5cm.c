#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

void setup()
{
	pinMode(X_STEP_PIN,OUTPUT);
	pinMode(X_DIR_PIN,OUTPUT);
	pinMode(X_ENABLE_PIN,OUTPUT);
	pinMode(X_MIN_PIN,INPUT);
	pinMode(X_MAX_PIN,INPUT);

	digitalWrite(X_DIR_PIN,LOW);
	digitalWrite(X_ENABLE_PIN,LOW);

	for(int i=0;i<4000;i++)
	{
		digitalWrite(X_STEP_PIN,HIGH);
		delayMicroseconds(200);
		digitalWrite(X_STEP_PIN,LOW);
		delayMicroseconds(200);

	}


}

void loop()
{

}