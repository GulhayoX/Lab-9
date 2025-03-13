#include <iostream>
#include <cmath>
using namespace std;

int multiplication(int a, int b) {
    if (b==0) {
        return 0;
    }
    else if (b > 0){
        return multiplication(a, b-1) + a;
    }
    else {
        return multiplication(a, b+1) - a;
    }
}

// int main() {
//     cout << multiplication(10, -20);
// }

// problem 2
int factorial(int n) {
    if (n==0){return 1;}
    else{return n*factorial(n-1);}
}
// int main() {
//     cout << factorial(5);
// }

// problem 3
int fibonacci(int n) {
    if (n == 0){return 0;}
    else if (n == 1){return 1;}
    else {return fibonacci(n-1)+fibonacci(n-2);}
}
// int main() {
//     cout << fibonacci(10);
// }

// problem 4
int sum_of_N(int n) {
    if (n == 0){return 0;}
    else {return sum_of_N(n-1)+n;}
}
// int main() {
//     cout << sum_of_N(9) << endl;
// }

//problem 5
string print_N(int n) {
    if (n == 1){return to_string(1);}
    else {return (to_string(n) + ' ' + print_N(n-1));}
}
// int main() {
//     cout<<print_N(7)<<endl;
// }

// problem 6
int len(int n) {
    if (n == 0){return 0;}
    else {return len(n/10) + 1;}
}
// int main(){cout<<len(9);}

//problem 7
int sum_of_digits(int n) {
    if (n == 0){return 0;}
    else {return sum_of_digits(n/10) + n%10;}
}
// int main() {cout << sum_of_digits(987);}

// problem 8
int power(int n, int k) {
    if (k == 0){return 1;}
    else {return power(n, k-1) * n;}
}
// int main() {
//     cout<<power(5, 4);
// }

// problem 9
void reversed(int n) {
    if (n == 0){}
    else {
        cout << to_string(n%10);
        reversed(n/10);
    }
}
// int main() {reversed(123456);}

// problem 10
bool isPalindrome(int m) {
    if (m<=9 && m >= 0){return true;}
    else {
        int i=0;
        i = log10(m);
        i = power(10,i);
        if (m/i == m%10) {
            int n = 0;
            n = m/i;
            cout << i;
            m = m - n*i;
            m = m/10;
            cout << "Going " << m;
            isPalindrome(m);
        }
        else {return false;}
    }
}
int main() {
    if (isPalindrome(121)){cout << "true";}
    else {cout << "false";}
}