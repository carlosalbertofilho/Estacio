soma_pares, cont_pares = 0, 0
soma_impares, cont_impares = 0, 0
for numero in range(1, 11):
    if numero % 2 == 0:
        print(f'{numero} é par')
        soma_pares += numero
        cont_pares += 1
    else:
        print(f'{numero} é inpar')
        soma_impares += numero
        cont_impares += 1
