def is_anagram (word1, word2):

    for letter1 in word1:
        if (word2.find(letter1)) < 0  or (word1.count(letter1) != word2.count(letter1)):
            return False
    
    return True


print(is_anagram('test', 'tess'))