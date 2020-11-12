x = float(input("Enter x: ")) #вводимо координату х даної точки
y = float(input("Enter y: ")) #вводимо координату y даної точки

if y >= abs(x) and y < 1: #Перевірка належності координати точки системі рівнянь
    res = True
else:
    res = False

print ("Result: ", res)
