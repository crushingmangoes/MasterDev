'''
    Program for finding the greatest common denominator for a pair of numbers (num1, num2)
    Uses the Euclidean Algorithm for finding GCD
    Time complexity is O(log(min(num1, num2)))
    
'''


def gcd(num1, num2):

    n1 = max(num1, num2)
    n2 = num1 + num2 - n1
    
    r = 1
    
    while r != 0:
        
        r = num1 % num2
        
        if r == 0:
            return num2
        
        num1 = num2
        num2 = r
    
    return num2

if __name__ == '__main__':
    print(gcd(49, 91))