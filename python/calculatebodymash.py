print("body mass index calculation program")height = float(input("enter height (m):"))
weight = int(input("enter weight (kg):"))
 
index  = weight/(height*height)
 
if index <=18:
    print("\n underweight BMİ:{}".format(index))
elif index > 18 and index <=25 :
    print("\n overweight BMİ:{}".format(index))
elif index > 25 and index <=30:
    print("\n obese BMİ:{}".format(index))
elif index > 30:
    print("\n severely obese BMİ:{}".format(index))
