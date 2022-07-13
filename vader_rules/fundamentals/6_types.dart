/*
 * - Números (int e double)
 * - String
 * - Booleano (bool)
 * - dynamic
 */

void main() {
  int n1 = 3;
  double n2 = (-5.67).abs(); //pega o valor sem o sinal
  double n3 = double.parse('12.7'); //converte a string
  num n4 = 1; //num recebe tanto ineteiro quanto double
  num n5 = 1.5;

  print(n1 + n2 + n3 + n4 + n5);

  String s1 = "good ";
  String s2 = "morning";

  print(s1 + s2); //concataneçaõ de strings
  print(s1 + s2.toUpperCase()); //converte em letras maiúsculas

  bool its_raining = true;
  bool its_cold = false;

  print(its_raining && its_cold); //usando o "e" para operações lógicas

  dynamic x = "a nice text :)"; //aceita diversos tipos
  print(x);

  x = 123;
  print(x);

  x = false;
  print(x);

  var y = "anouther nice text";
  print(y);

  // y = 123 <------- it's not possible ;)
}
