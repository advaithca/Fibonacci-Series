HALF = 0.5

def squareRoot(a):
    xi = 1
    for _ in range(a):
        xi = HALF*(xi + a/xi)
    xi = int(xi*1000)
    xi = float(xi/1000)
    return xi

PHI1 = (1+squareRoot(5))/2
PHI2 = (1-squareRoot(5))/2

def nthPower(A, N):
    nth_power = 1
    for _ in range(N):
        nth_power *= A
    return nth_power

def fibonacci(N):
    inverse_root_five = 1/squareRoot(5)

    print('0', end=" ")
    for i in range(1,N):
        FN = int(inverse_root_five*(nthPower(PHI1,i) - nthPower(PHI2,i)))
        print(FN+1, end=" ")
    print("\n")

def main():
    N = int(input("Enter number of terms :: "))
    fibonacci(N)

if __name__=="__main__":
    main()