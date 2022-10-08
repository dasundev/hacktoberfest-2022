#How Many Vowels? #22
def countvowels(string):
    num_vowels=0
    for char in string:
        if char in "aeiouAEIOU":
           num_vowels = num_vowels+1
    return num_vowels
    
print(countvowels("Sameera Dissanayaka")  )