print('Palindromes: ')
for i in range (1, 10):
        x = i * 1000 + i #власне паліндром
        print(x)
        for j in range (1, 10):
            x = i * 1000 + j * 100 + j * 10 + i #власне паліндром
            print(x)