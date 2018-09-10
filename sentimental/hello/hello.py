# basic python program that prints hello world to console

# Version 1
# print("hello, world")

# Version 2
# def main():
#     print("hello, world")

# if __name__ == "__main__":
#     main()

#Version 3
from cs50 import get_string

s = get_string("name: ")
print("hello {} you are my world".format(s))
