
valor = float(input('Digite um valor em metros para ser convertido: '))
op = int(input('\nDigite [1] Para cm \nDigite [2] Para mm  \nDigite [3] Para km \n'))

if op == 1:
   resp = valor * 100
   print(resp)
elif op == 2:
    resp = valor * 1000
    print(resp)
elif op == 3:
    resp = valor / 1000
    print(resp)
else:
    print('Comando inválido!')              
