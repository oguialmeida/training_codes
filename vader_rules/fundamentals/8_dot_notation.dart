main() {
  double nota = 6.99.roundToDouble(); // Arredonda para cima
  print(nota);

  String s1 = 'programming is supimpa';
  String s2 = s1.substring(0, 11); // Printa até determinada parte
  print(s2);

  String s3 = s2.toUpperCase();
  print(s3);

  String s4 = s3.padRight(23, '!!!!'); // Vai ser completado pelas exclamações
  print(s4);

  var s5 = 'coffe is black'
      /*Chama diversas funções, mas é
       importante enteder o que cada uma faz
       pois existem diferntes tipos de funções
       que são compatíveis com o a variável em questão*/
      .substring(0, 6)
      .padRight(6, '!')
      .toLowerCase()
      .toUpperCase();
  print(s5);
}
