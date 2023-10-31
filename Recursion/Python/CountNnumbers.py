def count_numbers(num):
    if num < 0:
        return 
    print(num)
    count_numbers(num - 1)
    print(num)

if __name__ == '__main__':
    count_numbers(5)
    pass