import 'dart:math';

main() {
  var nota = Random().nextInt(11);
  //Adiciona um núemro aleatório entre 1 e 10
  print('The students grade was $nota.');

  if (nota >= 6) {
    print("Approved!");
  } else if (nota == 5) {
    print("Student in recovery");
  } else {
    print("Disapproved");
  }
}
/* Obs: Não se usa ; em estruturas de controle
   com execssaõ do do/while */ 