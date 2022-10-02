def removeSpecialCharacter(s):
  t = ""
  for i in s:
    if (i.isalpha()):
      t += i
  print(t)


s = "#H@@a c++k..to-b%e**r$%fe@#s+_t"
removeSpecialCharacter(s)
