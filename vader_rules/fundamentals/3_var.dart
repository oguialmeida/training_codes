void main() {
  var a = 2; //pelo valor atribuido a liguagem vai inferir o tipo
  var b = 4.56; //vai ser demonimada como double
  var texto = "o valor da soma é ";

  print(a.runtimeType); //mostra o tipo da variável
  print(b.runtimeType);

  print(a is String); //retorna se é verdadeirp ou falso

  print(texto + (a + b).toString()); //converte para string após a soma
}
