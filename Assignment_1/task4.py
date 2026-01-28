# User input here does not cause string vulnerability because python treat strings as data by default, rather than format strings.
# Python separates data from executable code, so user input is not interpreted as executable code.

input = input()
print(input)