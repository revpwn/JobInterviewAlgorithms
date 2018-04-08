def anagramCheck(a, b):
    assert isinstance(a, str)
    assert isinstance(b, str)
    a = a.replace(" ", "").lower()
    b = b.replace(" ", "").lower()
    return sorted(a) == sorted(b)
	
	
if __name__ == "__main__":
	print(anagramCheck("Tom Marvolo Riddle", "I am Lord Voldemort"))
	print(anagramCheck("Hello", "olleH"))
	print(anagramCheck("Hi", "hello"))
