import 'dart:ffi';

main() {
  List<String> fruts = ['pineapple', 'banana', 'pear', 'strawberry'];
  // fruts.add(123);
  // o trecho acima irá dar um erro, pois o tipo é string
  print(fruts);

  Map<String, double> money = {
    'Manager': 19000.00,
    'Salesman': 2000.00,
    'Trainee': 600.00
  };
  print(money);
}
