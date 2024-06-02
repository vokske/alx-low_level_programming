#!/usr/bin/python3

import ctypes as ct

loaded = ct.CDLL('./100-operations.so')

loaded.add.argtypes = [ct.c_int, ct.c_int]
loaded.add.restype = ct.c_int

loaded.sub.argtypes = [ct.c_int, ct.c_int]
loaded.sub.restype = ct.c_int

loaded.mul.argtypes = [ct.c_int, ct.c_int]
loaded.mul.restype = ct.c_int

loaded.div.argtypes = [ct.c_int, ct.c_int]
loaded.div.restype = ct.c_int

loaded.mod.argtypes = [ct.c_int, ct.c_int]
loaded.mod.restype = ct.c_int

a = 5
b = 2

print("Addition of integers: {}".format(loaded.add(a, b)))
print("Subtraction of integers: {}".format(loaded.sub(a, b)))
print("Multiplication of integers: {}".format(loaded.mul(a, b)))
print("Division of integers: {}".format(loaded.div(a, b)))
print("Modulus of integers: {}".format(loaded.mod(a, b)))
