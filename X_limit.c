#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

void setup ()
{
	pinMode(X_STEP_PIN,OUTPUT);
	pinMode(X_DIR_PIN,OUTPUT);
	pinMode(X_ENABLE_PIN,OUTPUT);
	pinMode(X_MIN_PIN,INPUT);
 
	Serial.begin(9600);

	TCCR2A = 0x02;
    TCCR2B = 0x02;
    TIMSK2 = 0x02;
    OCR2A = 200;

    digitalWrite(X_DIR_PIN,HIGH);
    digitalWrite(X_ENABLE_PIN,LOW);
    digitalWrite(X_STEP_PIN,LOW);
    digitalWrite(X_MIN_PIN,INPUT_PULLUP);
}

void loop()
{


}

unsigned int step_count = 0;
int step_toggle = 0;

SIGNAL (TIMER2_COMPA_vect)
{

	if(step_toggle == 0)
	{
		step_toggle=1;

		digitalWrite(X_STEP_PIN,HIGH);
	}
	else
	{
		step_toggle = 0;

		digitalWrite(X_STEP_PIN,LOW);

		step_count++;
		if(step_count >= 5000)
		{
			step_count = 0;
			TIMSK2 = 0x00;
		}

		limit_switch = digitalRead(X_MIN_PIN);
		if(limit_switch == 1)
		{
			step_count =0;
			TIMSK2 = 0x00;
		}
	}
	

	


}