/*
* La fonction setup() est appelée
* au démarrage d'Arduino
*/
void setup() {
  // les instructions ci-dessous 
  // entre les deux accolades {} 
  // seront éxécutées à chaque démarrage

  // Nous activons la liaison série
  Serial.begin(9600);

  // Nous émettons un message :
  Serial.println("Hello world !");
}

/*
 * La fonction loop() est appelée
 * aussitôt après setup() et en "boucle"
 * à la fréquence de 25Mhz soit 25000 fois
 * par secondes
 */
void loop() {
  // le code sera répété tant que les ressources
  // en électricité et mémoire seront disponibles

}
