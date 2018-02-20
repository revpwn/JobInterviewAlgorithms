for number in range(1, 101):
    string = ''
    if number % 3 == 0:
        string += 'Fizz'
    if number % 5 == 0:
        string += 'Buzz'
    print(string if string else number)
