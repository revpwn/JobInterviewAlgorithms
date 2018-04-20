def squareRoot(num):
    """[summary]
    Uses the heron-procedure. 

    Arguments:
        num {[float]} -- [radikant]
    
    Returns:
        [float] -- [result]
    """
    xn = num / 10.0 # init step
    EPSILON = 0.001 # precision
    while abs(xn**2 - num) > EPSILON:
        xn = 0.5 * (xn + (num/xn))
    return xn

def main():
    # Test => 2.000
    print("sqrt(2)={0}".format(squareRoot(4.0)))

if __name__ == "__main__":
    main()