import re

def sum_of_nums(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    total_sum = 0
    for line in lines:
        numbers = re.findall('\d+', line)
        if numbers:
            first_digit = numbers[0][0]
            last_digit = numbers[-1][-1]
            total_sum += int(first_digit + last_digit)
    return total_sum

print(sum_of_nums('1weathermachine.txt'))


# i: many lines of text (num/char)
# o: sum of each line's first and last num joined, if only 1 num present it's 'numnum'

# input 1weathermachine.txt
# output 55172