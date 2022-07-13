main() {
  int a = 3;
  int b = 4;

  // Operadores Unários
  a++; // Posfix
  --a; // Prefix

  print(a);

  print(a++ == --b);
  /* Esse tipo de decremento será processado primeiro 
  sendo assim, a opereção realizada será verdadeira. */
  print(a == b);

  // Operadores unários lógicos (NOT)
  print(!true);
  print(!false);

  bool x = false;
  print(!x);
}
