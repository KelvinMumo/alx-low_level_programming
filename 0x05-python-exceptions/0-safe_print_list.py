#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    try:
        idx = 0
        for i in range(0, x):
            idx += 1
            print("{}".format(my_list[i]), end="")
        print()
        return x
    except IndexError:
        print()
        return index
