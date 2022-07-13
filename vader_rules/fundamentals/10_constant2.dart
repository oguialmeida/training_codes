main() {
  final sasageyo = ['Annie', 'Levi', 'Eren'];
  sasageyo.add('Mikasa');
  print(sasageyo);
  // Ainda é possível adicionar elementos mesmo sendo uma constante
  // final sasageyo = const ['Annie', 'Levi', 'Eren'];
  // Não poderia alterar com valor const no vetor

  var compras = ['Banana', 'Guarana', 'Coca-cola'];
  print(compras);

  compras = ['beef', 'lettuce'];
  print(compras);
  // Usando var é possível atribuir uma nova lista a variável
}
