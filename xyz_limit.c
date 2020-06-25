#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

void setup()
{
  pinMode(X_STEP_PIN,OUTPUT); 
  pinMode(X_DIR_PIN,OUTPUT);
  pinMode(X_ENABLE_PIN,OUTPUT);
  pinMode(X_MIN_PIN,INPUT_PULLUP);
  pinMode(X_MAX_PIN,INPUT_PULLUP);

  pinMode(Y_STEP_PIN,OUTPUT); 
  pinMode(Y_DIR_PIN,OUTPUT);
  pinMode(Y_ENABLE_PIN,OUTPUT);
  pinMode(Y_MIN_PIN,INPUT_PULLUP);
  pinMode(Y_MAX_PIN,INPUT_PULLUP);

  pinMode(Z_STEP_PIN,OUTPUT); 
  pinMode(Z_DIR_PIN,OUTPUT);
  pinMode(Z_ENABLE_PIN,OUTPUT);
  pinMode(Z_MIN_PIN,INPUT_PULLUP);
  pinMode(Z_MAX_PIN,INPUT_PULLUP);

  digitalWrite(X_DIR_PIN,HIGH );
  digitalWrite(X_ENABLE_PIN,LOW);
  digitalWrite(Y_DIR_PIN,HIGH );
  digitalWrite(Y_ENABLE_PIN,LOW);
  digitalWrite(Z_DIR_PIN,LOW );
  digitalWrite(Z_ENABLE_PIN,LOW);

  for(;;)
  {
     if(digitalRead(X_MIN_PIN) == 1)
    {
      break;
    }
    
    digitalWrite(X_STEP_PIN,HIGH);
    delayMicroseconds(200);
    digitalWrite(X_STEP_PIN,LOW);
    delayMicroseconds(200);
    
  

  }

  for(;;)
  {
     if(digitalRead(Y_MIN_PIN) == 1)
    {
      break;
    }
    
    digitalWrite(Y_STEP_PIN,HIGH);
    delayMicroseconds(200);
    digitalWrite(Y_STEP_PIN,LOW);
    delayMicroseconds(200);
    
  

  }

  for(;;)
  {
     if(digitalRead(Z_MIN_PIN) == 1)
    {
      break;
    }
    
    digitalWrite(Z_STEP_PIN,HIGH);
    delayMicroseconds(200);
    digitalWrite(Z_STEP_PIN,LOW);
    delayMicroseconds(200);
    
  

  }


}

void loop()
{

}