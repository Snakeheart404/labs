def first_d(a) : # функція, що знаходить першу цифру натурального числа
    res = a;
    while((res // 10) > 0) :
        res = res // 10
    return res

def sum_first_d(a, b, c) : # функція, що знаходить суму трьох чисел
    res = a + b + c
    return res

a = int(input("Enter a: ")) 
b = int(input("Enter b: ")) 
c = int(input("Enter c: ")) 

c1 = first_d(a) # перша цифра числа а
c2 = first_d(b) # перша цифра числа b
c3 = first_d(c) # перша цифра числа c

Result = sum_first_d(c1, c2, c3) # сума перших цифр заданих чисел

print ("Sum: ", Result)

