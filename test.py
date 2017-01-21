#!/usr/bin/env python3
# -*- coding: utf-8 -*-
def main():
    x = 6
    x_(x)


def x_(x):
    n= x
    for i in range(1,x+1):
        for j in range(1,x+1):
            if n == j:
                print (j,end='')
                n-=1
            elif i == j:
                print(j,end="")
            else:
                print("",end=' ')
        print()



            


if __name__ == '__main__':
    main()
