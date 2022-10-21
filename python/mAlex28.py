# Remove the Special Characters from a String
import re

def removeSpecialCharacters(input):
    return re.sub('[^A-Za-z0-9]+', '', input)

removeSpecialCharacters("P@#ython")