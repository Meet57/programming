inp = int(input("Enter Square : "))
main_list = [[0 for y in range(inp)] for x in range(inp)]
n = 1
low_val = 0
high_val = inp-1
count = int((inp + 1) / 2)

for i in range(count):
    for j in range(low_val, high_val + 1):
        main_list[i][j] = n
        n = n + 1
    for j in range(low_val + 1, high_val + 1):
        main_list[j][high_val] = n
        n = n + 1
    for j in range(high_val - 1, low_val - 1, -1):
        main_list[high_val][j] = n
        n = n + 1
    for j in range(high_val - 1, low_val, -1):
        main_list[j][low_val] = n
        n = n + 1
    low_val = low_val + 1
    high_val = high_val - 1

for i in range(inp):
    for j in range(inp):
        print(main_list[i][j], end="\t")
    print()
