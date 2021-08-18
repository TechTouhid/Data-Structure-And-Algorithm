#  Question how to find the sum of digits of a positive integer number using recursion?

def sum_of_positive_int_number(number):
    if number < 0 or number != int(number):
        return "Number must be a positive integer"
    if number == 0:
        return 0
    return int(number % 10) + sum_of_positive_int_number(int(number / 10))


print(sum_of_positive_int_number(11111111))
