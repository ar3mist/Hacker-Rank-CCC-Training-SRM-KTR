string = input()

# initialize variables
compressed_str = ""
cur_char = ""
cur_count = 0

# iterate through the characters of the string
for char in string:
    if char != cur_char:
        # a new character has been encountered
        if cur_count > 1:
            # append the compressed form of the previous character
            compressed_str += cur_char
        elif cur_count == 1:
            # append the previous character
            compressed_str += cur_char
        # reset the count and current character
        cur_count = 1
        cur_char = char
    else:
        # the same character has been encountered
        cur_count += 1

# append the compressed form of the final character
if cur_count > 1:
    compressed_str += cur_char
else:
    compressed_str += cur_char

print(compressed_str)
