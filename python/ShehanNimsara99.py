print('\n\t\t\t**Odd Even finder**\n\n ')
def even():
    while True:
        num = input('\n\n\t\t enter a number :-\t')
        if num.lower() in ['done','exit']:
            print("program terminated\n\n")
            break
        try:
            num=int(num)
            if num%2==0:
                print(f'\n {num} is a even number')
            else:
                print(f'\n {num} is a odd number')
            choice= input(f'do you want to know even numbers between 0 to {num}?  ')
            if choice.lower() in ['yes','y']:
                print(f'even nubmers between 1 to {num} :-')
                if num == 1 or num==0:
                    print('\t\t\t\t',0)
                for i in range(1, num):
                    if i%2==0:
                        print('\t',i,end = "\t")

        except Exception as e:
            print('invalid number!!')
def odd():
    while True:
        num = input('\n\n\t\t enter a number :-\t')
        if num.lower() in ['done','exit']:
            print('prpgram terminated\n\n')
            break
        try:
            num=int(num)
            if num%2==0:
                print(f'\t\n{num} is a even number\n')
            else:
                print(f'\t\n{num} is a odd number\n')
            choice= input(f'do you want to know even numbers between 0 to {num}?:  ')
            if choice.lower() in ['yes','y']:
                print(f'odd nubmers between 1 to {num} :-')
                if num == 1 or num == 0:
                    print('\t\t\t\t',0)
                for i in range(1, num):
                    if i%2 != 0:
                        print('\t',i,end = "\t")
        except Exception as e:                                          
            print('invalid number!!')
def input_check(val):
    if val.startswith('o') or val.startswith('O'):
        ans=input('do you mean odd? : ')
        if ans.lower() in ['yes', 'y']:
            print('odd number finder')
            print('\n\t\t\t**Odd numbers finder**\n\n ')
            odd()
        else:
            print('invalid input!!')
    elif val.startswith('e') or val.startswith('E'):
        ans=input("do you mean even ? ")
        if ans.lower() in ['yes','y']:
            print('\n\t\t\t**Even numbmers finder**\n\n ')
            even()
        else:
            print('invalide input')
    elif val.lower()== 'done':
        print('\n\t\tprogram finished thanks for using')
        print('\n**','_'*60,'**')
    else:
        print('please check the spellings\n')
while True:
    val=str(input('enter the number you want to find even or odd:-'))
    if val.lower() == 'even':
        print('\n\t\t\t**Even numbmers finder**\n\n ')
        even()
    elif val.lower() == 'odd':
        print('\n\t\t\t**Odd numbers finder**\n\n ')
        odd()
    elif val.lower() in ['done','exit']:
        print('program terminated')
        break
    else:
        input_check(val)
