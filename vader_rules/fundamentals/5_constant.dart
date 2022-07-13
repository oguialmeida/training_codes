// O código deve ser executado no terminal
// O programa repetira o que for digitado
// final é um const que é definido no meio do código
import 'dart:io';

void main() {
  // Área da circunferencia = PI * (raio * raio)
  const pi = 3.1415;

  stdout.write("Informe o raio: "); // coloca o input na mesma linha do "print"
  final user_input = stdin.readLineSync();
  final bolt = double.parse(user_input!); // converte string para numerico

  var area = pi * (bolt * bolt);
  print("circle area value is: " + area.toString());
}
