# palindrom number
# def isPalindrom(x):
#     if x < 0: return False
    
#     div = 1
#     while x > div * 10 : div *= 10
    
#     while x: 
#         right = x % 10 # take the right digit
#         left = x // div # take the left digit
        
#         if left != right: return False
#         x = (x % div) // 10 # remove left and the right digit
#         div = div / 100  # remove 2 digit from number
#     return True

# print(isPalindrom(1000021))

# palindrom string

# string_val = '12111'
# method 1
# temp_str = string_val[::-1]

# if string_val == temp_str:
#     print(True)
# else:
#     print(False)

# method 2
string_val = '1211'
str_temp = ''
for i in range(len(string_val) -1, -1, -1):
    str_temp += string_val[i]
if string_val == str_temp:
    print(True)
else:
    print(False)    
        