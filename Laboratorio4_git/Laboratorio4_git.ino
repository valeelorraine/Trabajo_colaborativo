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
int const buzzer = 6;

//*****************************************************************************************
//                                     S E T   U P 
//*****************************************************************************************
void setup() {
  pinMode(buzzer, OUTPUT);

}

//*****************************************************************************************
//                             P R I N C I P A L   L O O P 
//*****************************************************************************************
void loop() {
  tone(buzzer, 1000);
  delay(1000);                      // wait for a second
  tone(buzzer,500);
  delay(1000);
}
