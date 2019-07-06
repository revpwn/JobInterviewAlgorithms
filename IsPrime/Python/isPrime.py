def isPrime(num):
    # Any number <= 1 is not prime
    if num <= 1:
        return False
    else:
        # We only need to loop through num/2 times because we can't have a factor
        # that is more than half the value of num.
        for i in range(2,num/2):
            # We only need to find one factor in order to make the number composite(not a prime number)
            if num % i == 0:
                return False
        # If nothing is found we can just return true
        return True

# Test cases 

print(isPrime(2)) # => True
print(isPrime(9)) # => False
print(isPrime(41)) # => True
