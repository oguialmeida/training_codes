iteracoes = 0
flag = 0

vetor = [3, 5, 8, 10, 12, 14, 17, 18]

busca = input("\nDigite a chave buscada: ")

tipo = input("\nDigite o tipo de busca que deseja executar! \n\n[1] Sequencial [2] Binária: ")

if tipo == "1":
   for i in range(len(vetor)):
    iteracoes += 1
    if int(vetor[i]) == int(busca):
       print ("Busca sequencial {} encontrada após {} iterações.".format(busca, iteracoes))
       flag = 1
       break
    
    if int(vetor[i] > int(busca)):
       break    

if tipo == "2": 
   esquerda, direita = 0 , len(vetor)-1

   for i in range(len(vetor)):
      iteracoes += 1
      meio = (esquerda + direita) // 2
      if int(vetor[meio]) == int(busca):
         print("\nBusca sequencial {} encontrada após {} iterações.".format(busca, iteracoes))
         flag = 1
         break
      
      if int(busca) < int(vetor[meio]):
         direita = meio - 1
      else:
         +1
      
      if int(busca) > int(vetor[meio]):
         esquerda = meio + 1
      else:
         -1

if flag == 0:
   print("\nChave {} não encontrada. Número de interações: {}".format(busca, iteracoes))
