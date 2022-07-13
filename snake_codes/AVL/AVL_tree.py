# Guilherme Gomes de Almeida - 2020890

class No_da_Arvore(object):
    def __init__(self, val):
        self.val = val
        self.esquerda = None
        self.direita = None
        self.altura = 1

class Arvore_AVL(object):
    def insert(self, raiz, key):

        if not raiz:
            return No_da_Arvore(key)
        elif key < raiz.val:
            raiz.esquerda = self.insert(raiz.esquerda, key)
        else:
            raiz.direita = self.insert(raiz.direita, key)
 
        raiz.altura = 1 + max(self.get_altura(raiz.esquerda),
                           self.get_altura(raiz.direita))
 
        balancear = self.getbalancear(raiz)
 
        if balancear > 1 and key < raiz.esquerda.val:
            return self.direitaRotate(raiz)

        if balancear < -1 and key > raiz.direita.val:
            return self.esquerdaRotate(raiz)

        if balancear > 1 and key > raiz.esquerda.val:
            raiz.esquerda = self.esquerdaRotate(raiz.esquerda)
            return self.direitaRotate(raiz)

        if balancear < -1 and key < raiz.direita.val:
            raiz.direita = self.direitaRotate(raiz.direita)
            return self.esquerdaRotate(raiz)
 
        return raiz
 
    def esquerdaRotate(self, z):
        y = z.direita
        T2 = y.esquerda
 
        y.esquerda = z
        z.direita = T2
 
        z.altura = 1 + max(self.get_altura(z.esquerda),
                         self.get_altura(z.direita))
        y.altura = 1 + max(self.get_altura(y.esquerda),
                         self.get_altura(y.direita))

        return y
 
    def direitaRotate(self, z):
        y = z.esquerda
        T3 = y.direita
 
        y.direita = z
        z.esquerda = T3

        z.altura = 1 + max(self.get_altura(z.esquerda),
                        self.get_altura(z.direita))
        y.altura = 1 + max(self.get_altura(y.esquerda),
                        self.get_altura(y.direita))

        return y
 
    def get_altura(self, raiz):
        if not raiz:
            return 0
 
        return raiz.altura
 
    def getbalancear(self, raiz):
        if not raiz:
            return 
 
        return self.get_altura(raiz.esquerda) - self.get_altura(raiz.direita)
 
    def preOrder(self, raiz):
        if not raiz:
            return
 
        print("{0} ".format(raiz.val), end="")
        self.preOrder(raiz.esquerda)
        self.preOrder(raiz.direita)

    def xrange(self, raiz):
        for i in raiz:
            i += 1
            print(i)    
 
Arvore_principal = Arvore_AVL()
raiz = None
 
raiz = Arvore_principal.insert(raiz, 20)
raiz = Arvore_principal.insert(raiz, 40)
raiz = Arvore_principal.insert(raiz, 60)
raiz = Arvore_principal.insert(raiz, 70)
raiz = Arvore_principal.insert(raiz, 90)
raiz = Arvore_principal.insert(raiz, 30)

print("Árvore balancearada:")
Arvore_principal.preOrder(raiz)
print()