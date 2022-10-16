def consecutive_zeros(num):
    zero_max = 0
    temp_count = 0

    for numbers in str(num):
        if(numbers == '0'):
            temp_count +=1

            if(temp_count > zero_max):
                zero_max = temp_count

        else:
            if(temp_count > zero_max):
                zero_max = temp_count
                temp_count = 0
            else:
                temp_count = 0

    return zero_max

print(consecutive_zeros(0))