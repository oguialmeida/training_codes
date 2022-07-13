n1 = int(input('Digite um número: '))
n2 = int(input('Digite outro número: '))
op = int(input('\nDigite [1] Para "+" \nDigite [2] Para "-"  \nDigite [3] Para "*" \nDigite [4] Para "/" \n'))

if op == 1:
    print('{} + {} = {}'.format(n1, n2, (n1 + n2)))

elif op == 2:
    print('{} - {} = {}'.format(n1, n2, (n1 - n2)))

elif op == 3:
    print('{} * {} = {}'.format(n1, n2, (n1 * n2)))

elif op == 4:
    print('{} / {} = {}'.format(n1, n2, (n1 / n2)))

else:
    print('Comando inválido!')
