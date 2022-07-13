# Guilherme Gomes de Almeida - 2020890
# Não consegui fazer a comparação dos requisitos da árvore

class No:     
     def __init__(self, key, direita, esquerda):
          self.item = key
          self.direita = direita
          self.esquerda = esquerda

class Arvore:
     def __init__(self):
          self.raiz = No(None,None,None)
          self.raiz = None
     
     # Insere um elemento na árvore
     def inserir(self, v):
          novo = No(v,None,None) 
          if self.raiz == None:
               self.raiz = novo
          else: 
               atual = self.raiz
               while True:
                    anterior = atual
                    if v <= atual.item: 
                         atual = atual.esquerda
                         if atual == None:
                                anterior.esquerda = novo
                                return
                    else: 
                         atual = atual.direita
                         if atual == None:
                                 anterior.direita = novo
                                 return
     
     # Apresenta o nó seguinte (necessário para remoção)
     def no_seguinte(self, apaga): 
          paidoseguinte = apaga
          seguinte = apaga
          atual = apaga.direita

          while atual != None: 
               paidoseguinte = seguinte
               seguinte = atual
               atual = atual.esquerda 
               paidoseguinte.esquerda = seguinte.direita 
               seguinte.direita = apaga.direita 
                                        
          return seguinte

    # Remove um elemento com ajuda da função acima
     def remover(self, v):
         if self.raiz == None:
               return False 
         atual = self.raiz
         pai = self.raiz
         filho_esquerda = True
    
         while atual.item != v: 
               pai = atual
               if v < atual.item:
                    atual = atual.esquerda
                    filho_esquerda = True 
               else: 
                    atual = atual.direita 
                    filho_esquerda = False 
               if atual == None:
                    return False 

         if atual.esquerda == None and atual.direita == None:
               if atual == self.raiz:
                    self.raiz = None 
               else:
                    if filho_esquerda:
                         pai.esquerda =  None 
                    else:
                         pai.direita = None 

         elif atual.direita == None:
               if atual == self.raiz:
                    self.raiz = atual.esquerda 
               else:
                    if filho_esquerda:
                         pai.esquerda = atual.esquerda 
                    else:
                         pai.direita = atual.esquerda 
         
         elif atual.esquerda == None:
               if atual == self.raiz:
                    self.raiz = atual.direita 
               else:
                    if filho_esquerda:
                         pai.esquerda = atual.direita 
                    else:
                         pai.direita = atual.direita 

         else:
               seguinte = self.no_seguinte(atual)
               if atual == self.raiz:
                    self.raiz = seguinte 
               else:
                    if filho_esquerda:
                         pai.esquerda = seguinte 
                    else:
                         pai.direita = seguinte 
               seguinte.esquerda = atual.esquerda   

         return True

# Chama a Classe desejada
arv = Arvore()
opcao = ()

print('Bem vindo ao sistema persistência de Dados que utiliza árvores AVL')
print('\nEscolha uma das opções abaixo:')

while opcao != 0:
     print('\n1 – Inserir um novo elemento na árvore AVL') 
     print('\n2 – Excluir um elemento da árvore') 
     print('\n3 – Verificar se a atende todos os requisitos de uma árvore AVL') #Não funcional
     print('\n0 – Encerrar o programa ')
     opcao = int(input())
     if opcao == 1:
          x = int(input("Informe o valor: "))
          arv.inserir(x)
     elif opcao == 2:
          x = int(input("Informe o valor: "))
          if arv.remover(x) == False:
               print("Valor não encontrado na árvore")	 
     elif opcao == 3:
          arv.balanco() #Onde seria a função de balanceamento 
     elif opcao == 0:
          break