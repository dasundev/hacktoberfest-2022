##How many Vowels
count=0
vowels= ["a","e","i","o","u","A","E","I","O","U"]
word=input("Enter a setence or a word: ")
l=list(word)
for n in range(0,len(vowels)):
    for i in range(0, len(l)):
        if vowels[n]==l[i]:
            l1=list(l[i])
            count=count+1
        print(l1)
print("Count of the vowels: ",count)
