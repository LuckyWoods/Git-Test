#include <iostream>

int sum(int n);

int main() {
     std::cout << "Hello World!" << std::endl;
     
     int n;
     std::cout << "Number please: ";
     std::cin >> n;
     std::cout << "Sum is " << sum(n) << std::endl;
     
     
     return 0;

}

int sum(int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + i + 1;
    }

    return total;

}