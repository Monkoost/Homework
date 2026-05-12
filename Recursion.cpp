
#include <iostream>

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    return x * power(x, n - 1);
};

int digit_sum(int n) {
    if (n == 0) {
        return 0;
    }
        return n % 10 + digit_sum(n / 10);

}
int digit_count(int n) {
    if (n == 0) {
        return 0;
    }
	return 1 + digit_count(n / 10);
}
void print_binary(int n) {
    if (n == 0) {
        return;
	}
	std::cout << (n % 2);

    print_binary(n / 2);
}

int main() {
    std::cout << power(2.0, 10) <<"\n------" << std::endl;  // 1024

	std::cout << digit_sum(12345) << "\n------" << std::endl;  // 15

	std::cout << digit_count(12345) << "\n------" << std::endl;  // 5

	std::cout << "Binary representation of 10: ";
    print_binary(10);
    std::cout << "\n------" << std::endl;
    return 0;
}
  
