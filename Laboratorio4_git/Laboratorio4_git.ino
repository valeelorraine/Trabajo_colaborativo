// Margareth Vela                                  Carné: 19458
// Valerie Valdez                                  Carné: 19659
// Universidad del Valle de Guatemala              Sección: 20

//                          Diseño e innovación
//                          Introducción a GIT
//                            Laboratorio 4

// Programa para parpadeo de un led y el funcionamiento de un buzzer
// de forma intermitente.

//*****************************************************************************************
//                                 V A R I A B L E S
//*****************************************************************************************

int cost buzzer = 6;
//*****************************************************************************************
//                                     S E T   U P
//*****************************************************************************************
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

//*****************************************************************************************
//                             P R I N C I P A L   L O O P
//*****************************************************************************************
void loop() {
  tone(buzzer, 2000);               // Frecuencia de 2000
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  tone(buzzer,50);
  digitalWrite(1, HIGH);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW                    // wait for a second
  digitalWrite(1, LOW);
  delay(1000);
}
