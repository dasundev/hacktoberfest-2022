#Enter values

String = input('Enter Your Word :')
count = 0
String = String.lower()
for i in String:

    if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':

#if True
        count+=1
#check the vowels

if count == 0:
    print('No vowels in Your Word')
else:
    print('Total Vowels Are :' + str(count))