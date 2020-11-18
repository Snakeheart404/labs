from math import sin
import math

e = float(input("Enter the accuracy: ")) # Стала ε (точність обчислювання)
n = 1 # Кількість відрізків n, на яку розбили відрізок інтегрування 
h = math.pi / n # Висота кожного окремого прямокутника
s = math.log(2 + math.sin(math.pi / 2 * n)) * h # Поточне наближення інтегралу


while True:
    s0 = s # Попереднє наближення інтегралу
    n = 2 * n
    s = 0.0
    h = math.pi / n
    for i in range (n):
        x = math.log(2 + math.sin(i * math.pi / n - math.pi / 2 * n )) * h
        s = s + x
    if math.fabs(s - s0) < e:
        break 
    
Res = s # Шукане наближене значення інтеграла
print('Integral: ', Res)