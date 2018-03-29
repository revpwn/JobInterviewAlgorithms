function factorial(num) {
  if (num === 0 || num === 1)
    return 1;
  return num * factorialize(num-1);
}
factorial(5);
