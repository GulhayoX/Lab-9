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
#include <iostream>
#include <string>

using namespace std;

bool isPalindromeHelper(const string& s, int l, int r) {
    if (l >= r) return true;  // Base case: one or zero characters left
    if (s[l] != s[r]) return false;  // Mismatch found
    return isPalindromeHelper(s, l + 1, r - 1);  // Recursive step
}

bool isPalindrome(int n) {
    string s = to_string(n);  // Convert number to string
    return isPalindromeHelper(s, 0, s.size() - 1);
}

// int main() {
//     cout << "121: " << isPalindrome(121) << endl;  // true
//     cout << "123: " << isPalindrome(123) << endl;  // false
//     return 0;
// }

// problem 11
bool isPrime(int n, int divisor = 2) {
    if (n < 2) return false;
    if (divisor * divisor > n) return true;
    if (n % divisor == 0) return false;
    return isPrime(n, divisor + 1);
}

// int main() {
//     cout << boolalpha;
//     cout << "2: " << isPrime(2) << endl;
//     cout << "17: " << isPrime(17) << endl;
//     cout << "18: " << isPrime(18) << endl;
//     return 0;
// }

// problem 12
