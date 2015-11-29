/*
 * Nous utilisons une variable pour stocker
 * le numéro du pin sur lequel nous branchons
 * le capteur infra rouge.
 * nous utilisons une constante avec const
 * et notre variable sera un entier int
 */
const int passageA = A0;

/*
 * pour la mesure de réflexion du capteur
 * nous utiliserons aussi une variable de type int
 */
int reflexion1;

/*
 * seuilA est notre valeur de référence,
 * au delà de cette valeur nous pourrons
 * penser que quelque chose est devant 
 * le capteur
 */
int seuilA = 200;

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
  Serial.println("Starting setup");

  // nous stockons la valeur du capteur
  reflexion1 = analogRead(passageA);

  // nous affichons notre message
  Serial.println("A0/passageA a pour valeur:");

  // nous affichons notre variable
  Serial.println(reflexion1);


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

  // nous stockons la valeur du capteur
  reflexion1 = analogRead(passageA);

  // Nous affichons la valeur si elle dépasse notre seuil
  if(reflexion1 > seuilA)
  {
    Serial.print("A0 = ");
    Serial.println(analogRead(passageA));
  }


}
