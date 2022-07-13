// Operadores ternários
import 'dart:io';

main() {
  stdout.write("It's raining? (y/N) ");
  bool itsRaining = stdin.readLineSync() == "y";

  stdout.write("It's cold? (y/N) ");
  bool itsCold = stdin.readLineSync() == "y";

  String result = itsRaining || itsCold ? "Stay at home!" : "Let's go out";
  print(result);
  // Caso sim e caso não
  print(itsRaining && itsCold ? "Unlucky bro :/" : "hehe");
  // Mesmo exemplo mas diretamente no print
}
