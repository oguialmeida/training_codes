main() {
  // Operadores de atribuição (binário/infix)
  double a = 2;
  a = a + 3; // Acrescenta no valor atual da variável
  a += 3; // Uma sintexe diferente para a operação acima
  a -= 3;
  a *= 3;
  a /= 5;
  a %= 2; // Resto da divisão modulo 2

  print(a);

  // Operadores Relacionais (binário/infix) -> o resultado sempre é bool
  print(3 > 2);
  print(3 >= 3);
  print(3 < 4);
  print(3 <= 3);
  print(3 != 3);
  print(3 == 3);
  print(3 == '3');

  print(2 + 4 > 3 - 1 && 4 + 7 != 7 - 4);
  print(5 & 4); // Operação bit a bit
}
