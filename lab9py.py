# функція для підрахунку слів, що починаються й закінчуються тими самими символами
def countWords(str):
  count = 0
  words = str.split()
  for word in words:
    wordLen = len(word)
    firstChar = word[0]
    lastChar = word[wordLen - 1]

    if firstChar == lastChar:
      count += 1
      print("the word with the same \'" + firstChar + "\' char is: " + word)
  return count

inputString = input("Input string: ")
wordsCount = countWords(inputString) # підрахунок слів, що починаються й закінчуються тими самими символами
print("Number of words is: " + str(wordsCount))