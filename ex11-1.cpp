#include <iostream>

int fib(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    std::cout << "input n: "; int input_num;
    std::cin >> input_num;
    if (input_num < 0){
        std::cout << "error\n";
        return 0;
    }
    std::cout << "fibonacci(" << input_num << ") = " << fib(input_num) << std::endl;
    return 0;
}
