decimal_num = int(input())

# convert decimal number to binary string
binary_str = bin(decimal_num)

# remove the '0b' prefix from the binary string
binary_str = binary_str[2:]

print(binary_str)
