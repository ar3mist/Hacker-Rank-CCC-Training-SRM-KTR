import re

# define a function to solve the problem
def solve_problem(statement):
    # extract values of I, V and R from the statement
    I = re.findall(r'I=(\d+\.?\d*)A', statement)
    V = re.findall(r'V=(\d+\.?\d*)V', statement)
    R = re.findall(r'R=(\d+\.?\d*)O', statement)

    # calculate missing value based on given values
    if len(I) == 1 and len(V) == 1:
        R = float(V[0]) / float(I[0])
        print("R={:.2f}O".format(R))
    elif len(I) == 1 and len(R) == 1:
        V = float(R[0]) * float(I[0])
        print("V={:.2f}V".format(V))
    elif len(V) == 1 and len(R) == 1:
        I = float(V[0]) / float(R[0])
        print("I={:.2f}A".format(I))
    else:
        print("Invalid problem statement.")

# read multiple problem statements from input
while True:
    try:
        statement = input()
        solve_problem(statement)
    except EOFError:
        break