main() {
  //Aritméticos (operradores binário/infix)
  int a = 7;
  int b = 3;
  int result = a + b;

  print(result);
  print(a - b);
  print(a * b);
  print(a / b);
  print(a % b); // Resto da divisão
  print(a + (b * a) - (b / a)); // Precedência

  // Operadores lógicos
  bool isFragile = true;
  bool isExpensive = false;

  print(isFragile && isExpensive); // E
  print(isFragile | isExpensive); // OU
  print(isFragile ^ isExpensive); // OU EXCLUSIVO
  print(!isFragile); // Negação
  print(!!isFragile); // Negação da negação
}
