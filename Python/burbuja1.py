#arreglo de 10 elementos
arreglo = [0,0,0,0,0,0,0,0,0,0]

for i in range(len(arreglo)):
    arreglo[i] = int(input("Ingrese un número: "))

print("Arreglo original: ", arreglo)

for i in range(len(arreglo)):
    for j in range(len(arreglo)-1):
        if arreglo[j] > arreglo[j+1]:
            temp = arreglo[j]
            arreglo[j] = arreglo[j+1]
            arreglo[j+1] = temp
    
print("Arreglo ordenado", arreglo)