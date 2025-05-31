/*
* 
* 
* 
* 
*/

#define SW1A  2
#define SW3   3
#define SW4T  4
#define SW4B  5

#define MOTOR_ON
#define MOTOR_OFF
#define HEATER_ON
#define HEATER_OFF
#define BUZZER_ON
#define BUZZER_OFF

typedef enum {
  IDLE = 0,
  START = 1,
  DRYING = 2,
  COOLDOWN = 4,
  STOP = 5,
  ERROR = 6
} state;


state dryer_state = IDLE;
unsigned long run_time = 0;
unsigned long last_time = 0;

void setup() {

  pinMode(SW1A, OUTPUT);
  pinMode(SW3,  OUTPUT);
  pinMode(SW4T, OUTPUT);
  pinMode(SW4B, OUTPUT);

  digitalWrite(SW1A, LOW);
  digitalWrite(SW3,  LOW);
  digitalWrite(SW4T, LOW);
  digitalWrite(SW4B, LOW);
  
  Serial.begin(9600); // debug only
}


void loop() {

    // dryer handler
    switch(dryer_state){

      case IDLE:
      break;

      case START:
      break;

      case DRYING:
      break;

      case COOLDOWN:
      break;

      case STOP:
      break;

      case ERROR:
      break;

      default:
      break;
    }

    // update timers
    run_time = millis();
    if((run_time - last_time) > 1000)
    {
        last_time = run_time;
        Serial.println(last_time/1000);
    }
}
