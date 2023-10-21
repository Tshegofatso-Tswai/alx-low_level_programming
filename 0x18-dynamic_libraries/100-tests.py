import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Define input values
a = 66
b = -76

# Call C functions from the shared library
result_add = cops.add(a, b)
result_sub = cops.sub(a, b)
result_mul = cops.mul(a, b)
result_div = cops._div(a, b)
result_mod = cops.mod(a, b)

# Print the results
print(f"{a} + {b} = {result_add}")
print(f"{a} - {b} = {result_sub}")
print(f"{a} x {b} = {result_mul}")
print(f"{a} / {b} = {result_div}")
print(f"{a} % {b} = {result_mod}")

