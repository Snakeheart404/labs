n = int(input("Enter a three-digit number: ")) #вводимо тризначне число
first_n = n // 100 #перша цифра зліва
res = (n % 100) * 10 + first_n #число з приписаною першою цифрою в кінці

print ("Result: ", res)


