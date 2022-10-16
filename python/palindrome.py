def palindrome(word):
    return word == word[::-1]

print(palindrome("abcd"))