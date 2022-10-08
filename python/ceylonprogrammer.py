#Count the Number of Duplicate Characters #29
chars = "abcdefghijklmnopqrstuvwxyz"
check_string = "i am checking this string to see how many times each character appears"

for char in chars:
  count = check_string.count(char)
  if count > 1:
    print (char, count)