def zap(a,b):
    new_list = []
    for num,value in enumerate(a):
        new_list.append((value,b[num]))
    
    return new_list

    


print(zap([0, 1, 2, 3],[5, 6, 7, 8]))