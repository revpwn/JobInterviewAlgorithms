def square_root(num):
    """[summary]
    Computes the square root.
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
    print("sqrt(2)={0}".format(square_root(2.0)))


if __name__ == "__main__":
    main()