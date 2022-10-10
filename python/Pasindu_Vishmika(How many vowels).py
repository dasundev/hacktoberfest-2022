#solution to How Many Vowels?

s=input("Enter your text : ")
vov=['a','e','i','o','u','A','E','I','O','U']
count=0
for i in range (len(s)):
    for x in range(len(vov)):
        if vov[x] in s[i]:
            count+=1
print(count)
