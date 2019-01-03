array = [11, 20, 30, 40.5, 50]

# random indexing ---> O(1) get items if we know the index !!!
# print(array[0])

# array[0] = 'Touhid'
# print(array[0])

# for i in array:
#     print(i)

# for i in range(len(array)):
#     print(array[i])

# print(array[0:2])

# O(N) Liner search
maximum = array[0]

for i in array:
    if i > maximum:
        maximum = i

print(maximum)
