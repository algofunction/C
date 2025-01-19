/*fonction entier sur un double indique si val est entiere*/

//def entier {}

static boolean entier(double d){
  int partieEntiere = (int) d;
  if (partieEntiere == d) return true;
  return false;
}
