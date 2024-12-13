#include <iostream>

int bisection(int u, int a, int l=0, int search_cout=0){
    if (l > a && u < a){
        std::cout << "ERROR: Target is out of range.";
        return 0;
    }
    int m{(l + u) / 2};
    search_cout++;
    if (m==a) return search_cout;
    else if (m > a) return bisection(m - 1, a, l, search_cout);
    else return bisection(u,a,m+1, search_cout);
}

int main(){
    std::cout << "Input n: ";
    int n; std::cin >> n;
    std::cout << "Input ans: ";
    int ans; std::cin >> ans;
    std::cout << "Number of bisections: " << bisection(n, ans) << std::endl;
    return 0;
}