main() {
  String name = "John";
  String status = "approved";
  double grade = 9.5;

  // Juntando os elementos com concatenação
  String phrase = name + " is " + status;
  print(phrase);

  // Usando a interpolação
  String phrase2 = "$name is $status";
  print(phrase2);

  // Como coloco o cifrão normal em uma string?
  print("\$");

  // Expressões complexas
  print("1 + 1 = ${1 + 1}");
}
