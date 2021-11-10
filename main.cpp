#include <iostream>

int sum(int n);
int product(int n);


int main() {
     std::cout << "Hello World!" << std::endl;
     
     int n;
     std::cout << "Number please: ";
     std::cin >> n;
     std::cout << "Sum is " << sum(n) << std::endl;
     std::cout << "Product is " << product(n) << std::endl;

     
     return 0;

}

int sum(int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total = total + i + 1;
    }

    return total;

}

int product(int n){
    int total = 1;
    for(int i = 0; i < n; i++){
        total = total * (i + 1);
    }

    return total;

}
