# function to check if a number is prime or not
def is_prime(n):
    # check for special cases
    if n == 1:
        return False
    elif n == 2:
        return True
    elif n % 2 == 0:
        return False
    else:
        # check if n is divisible by any odd number between 3 and the square root of n
        for i in range(3, int(n**0.5) + 1, 2):
            if n % i == 0:
                return False
        return True

# main program
n = int(input())

if is_prime(n):
    print("yes")
else:
    print("no")