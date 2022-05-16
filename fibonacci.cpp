#include<iostream>
using namespace std;

double squareRoot(int a){
    double xi = 1.0;
    double temp = 1.0;
    for(int i = 0; i < a; ++i){
        temp = 0.5 * (xi + a/xi);
        xi = temp;
    }
    temp = (int)(xi*1000);
    xi = (double)(temp/1000);
    return xi;
}

double nth_power(double A, int N){
    double nth_power = 1.0;
    for( int i = 0; i < N; ++i ){
        nth_power *= A;
    }
    return nth_power;
}

void fibonacci(int n){
    double root_of_five = squareRoot(5);
    double PHI1 = (1.0 + root_of_five)/2;
    double PHI2 = (1.0 - root_of_five)/2;
    double inverse_root_of_5 = 1/root_of_five;
    int Fn = 0;
    cout << Fn << " ";
    for( int i = 1; i <= n; ++i ){
        Fn = (int)(inverse_root_of_5*(nth_power(PHI1,i) - nth_power(PHI2,i)));
        cout << Fn+1 << " ";
    }
}

int main(){
    int n;
    cout << "Enter limit : ";
    cin >> n;

    fibonacci(n);

    cout << endl;
    return 0;
}