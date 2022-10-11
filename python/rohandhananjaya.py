#Remove the Special Characters from a String

checkText = input("Enter the text here : ")
validText = ""

for character in checkText:
    if character.isalnum():
        validText += character

print("Special characters removed text : "+validText)
    
