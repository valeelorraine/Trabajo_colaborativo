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

//*****************************************************************************************
//                                     S E T   U P
//*****************************************************************************************
void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

//*****************************************************************************************
//                             P R I N C I P A L   L O O P
//*****************************************************************************************
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW                    // wait for a second
  digitalWrite(1, LOW);
}
