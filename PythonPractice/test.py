def fun_generator():
    yield "Hello world!!"
    yield "Geeksforgeeks"

obj = fun_generator()
print(type(obj))  # Output: <class 'generator'>
print(next(obj))  # Output: Hello world!!
print(next(obj))  # Output: Geeksforgeeks
