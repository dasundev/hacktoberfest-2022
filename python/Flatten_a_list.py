def flatten(llist):
    new_List = []

    for i in range (len(llist)):
        for j in range (len(llist[i])):
            new_List.append(llist[i][j])
    
    return new_List
        

print(flatten([[1, 2], [3, 4, 5]]))