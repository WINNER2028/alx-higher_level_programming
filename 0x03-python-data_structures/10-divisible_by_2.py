#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    check_div = []

    for index in range(len(my_list)):
        if my_list[index] % 2 == 0:
            check_div.append(True)
        else:
            check_div.append(False)

    return (check_div)
