from numpy import *

p = array(['', '', '', '', '', '', '', '', ''])                           # plane

m = p.reshape(3, 3)                                                       # reshape of plane
for i in range(0, 9):
    x = int(input('write for x :'))
    if 'x' != p[x] and 'o' != p[x]:
        p[x] = 'x'
        print(m)

        if x == 0 or x == 3 or x == 6:

            if p[x] == p[x + 1] and p[x + 1] == p[x + 2]:                     # checking of 1st row
                print('x won!')
                break

            if x == 0:
                if p[x] == p[x + 4] and p[x + 5] == p[x + 8]:                 # checking diagonal from 0 to 8
                    print('x won!')
                    break
                if p[x] == p[x + 3] and p[x] == p[x + 6]:                     # checking coloumn 1st
                    print('x won!')
                    break

            if x == 6:
                if p[x] == p[x - 2] and p[x - 2] == p[x - 4]:                 # checking diagonal from 6 to 2
                    print('x won!')
                    break
                if p[x] == p[x - 3] and p[x] == p[x - 6]:                     # checking coloumn 1st
                    print('x won!')
                    break

            if x == 3:
                if p[x] == p[x - 3] and p[x] == p[x + 3]:                     # checking coloumn 1st
                    print('x won!')
                    break


        if x == 1 or x == 4 or x == 7:

            if p[x] == p[x + 1] and p[x + 1] == p[x - 1]:                     # cheking of 2nd row
                print('x won!')
                break

            if x == 1:
                if p[x] == p[x + 3] and p[x] == p[x + 6]:                     # checking coloumn 2nd
                    print('x won!')
                    break

            if x == 4:
                if p[x] == p[x - 3] and p[x] == p[x + 3]:                     # checking coloumn 2nd
                    print('x won!')
                    break

            if x == 7:
                if p[x] == p[x - 3] and p[x] == p[x - 6]:                     # checking coloumn 2nd
                    print('x won!')
                    break


        if x == 2 or x == 5 or x == 8:

            if p[x] == p[x - 1] and p[x - 1] == p[x - 2]:                     # checking of 3rd row
                print('x won!')
                break

            if x == 2:
                if p[x] == p[x + 2] and p[x + 4] == p[x + 2]:                 # checking diagonal from 2 to 6
                    print('x won!')
                    break
                if p[x] == p[x + 3] and p[x] == p[x + 6]:                     # checking coloumn 3rd
                    print('x won!')
                    break

            if x == 8:
                if p[x] == p[x - 4] and p[x - 4] == p[x - 8]:                 # checking diagonal from 8 to 0
                    print('x won!')
                    break
                if p[x] == p[x - 3] and p[x] == p[x - 6]:                     # checking coloumn 3rd
                    print('x won!')
                    break

            if x == 5:
                if p[x] == p[x + 3] and p[x] == p[x - 3]:                     # checking coloumn 3rd
                    print('x won!')
                    break

    o = int(input('write for o :'))
    if 'o' != p[o] and 'x' != p[o]:
        p[o] = 'o'
        print(m)

        if o == 0 or o == 3 or o == 6:

            if p[o] == p[o + 1] and p[o + 1] == p[o + 2]:  # checking of 1st row
                print('o won!')
                break

            if o == 0:
                if p[o] == p[o + 4] and p[o + 5] == p[o + 8]:  # checking diagonal from 0 to 8
                    print('o won!')
                    break
                if p[o] == p[o + 3] and p[o] == p[o + 6]:  # checking coloumn 1st
                    print('o won!')
                    break

            if o == 6:
                if p[o] == p[o - 2] and p[o - 2] == p[o - 4]:  # checking diagonal from 6 to 2
                    print('o won!')
                    break
                if p[o] == p[o - 3] and p[o] == p[o - 6]:  # checking coloumn 1st
                    print('o won!')
                    break

            if o == 3:
                if p[o] == p[o - 3] and p[o] == p[o + 3]:  # checking coloumn 1st
                    print('o won!')
                    break

        if o == 1 or o == 4 or o == 7:

            if p[o] == p[o + 1] and p[o + 1] == p[o - 1]:  # cheking of 2nd row
                print('o won!')
                break

            if o == 1:
                if p[o] == p[o + 3] and p[o] == p[o + 6]:  # checking coloumn 2nd
                    print('o won!')
                    break

            if o == 4:
                if p[o] == p[o - 3] and p[o] == p[o + 3]:  # checking coloumn 2nd
                    print('o won!')
                    break

            if o == 7:
                if p[o] == p[o - 3] and p[o] == p[o - 6]:  # checking coloumn 2nd
                    print('o won!')
                    break

        if o == 2 or o == 5 or o == 8:

            if p[o] == p[o - 1] and p[o - 1] == p[o - 2]:  # checking of 3rd row
                print('o won!')
                break

            if o == 2:
                if p[o] == p[o + 2] and p[o + 4] == p[o + 2]:  # checking diagonal from 2 to 6
                    print('o won!')
                    break
                if p[o] == p[o + 3] and p[o] == p[o + 6]:  # checking coloumn 3rd
                    print('o won!')
                    break

            if o == 8:
                if p[o] == p[o - 4] and p[o - 4] == p[o - 8]:  # checking diagonal from 8 to 0
                    print('o won!')
                    break
                if p[o] == p[o - 3] and p[o] == p[o - 6]:  # checking coloumn 3rd
                    print('o won!')
                    break

            if o == 5:
                if p[o] == p[o + 3] and p[o] == p[o - 3]:  # checking coloumn 3rd
                    print('o won!')
                    break
