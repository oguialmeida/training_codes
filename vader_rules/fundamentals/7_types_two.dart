/*
 - List
 - Set
 - Map
*/

void main() {
  // Explicando List
  List aprovados = ['Leo', 'Mick', 'Donnie', 'Raph', 'Spĺinter'];
  print(aprovados);
  var aprovados2 = ['Leo', 'Mick', 'Donnie', 'Raph', 'Spĺinter'];
  // var também serve para a operação lista
  aprovados.add('Raph'); // Adiciona um elemento
  print(aprovados);

  print(aprovados2 is List); // Mastra se é verdade
  print(aprovados.elementAt(0)); // Acessa um elemento da lista

  // Explicando Map
  Map telefones = {
    // Pode ser var também
    'John': '+55 (62) 983256781',
    'Johny': '+55 (62) 983256782',
    'Johnson': '+55 (62) 983256783',
    'Johnilson': '+55 (62) 983256784',
    'John': '+55 (62) 777-777'
    // O valor apresentado para John será o último uma "atualização"
  };

  print(telefones is Map);
  print(telefones);
  print(aprovados.elementAt(1));
  print(telefones['John']);
  // Diferente da lista acessamos a valor através da chave
  print(telefones.length); // Mostra a quantidade
  print(telefones.keys); // Apresenta somente as chaves
  print(telefones.values); // Não apresenta as chaves :)
  print(telefones.entries);

  // Explicando Set
  var times = {'Real Madrid', 'Flamengo', 'Barecelona', 'Corinthians'};
  // Já coloca automaticamente em String, usando Set teria que especificar

  print(times is Set);
  times.add('Vasco'); // Adiciona outro time
  times.add('Vasco'); // Mas diferente do list repete o mesmo valor
  print(times);
  print(times.length);
  print(times.contains('Flamengo')); // Mostra se contém determinado valor
  print(times.first); // Apresenta o primeiro
  print(times.last); // Apresenta o último
}
