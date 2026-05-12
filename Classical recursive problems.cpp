
#include <iostream>
#include<vector>
bool is_palindrome(std::vector<char>& v, int left, int right) {
    if (left >= right) {
        return true;
	}
    if (v[left] != v[right]) {
        return false;
    }
    return is_palindrome(v, left + 1, right - 1);
}
int gcd(int a, int b) {
    if (b == 0) {
		return a;
    }
    return gcd(b, a % b);
}



int main()
{
    std::cout << "Hello World!\n";
	std::vector<char> v = { 'a', 'b', 'c', 'b', 'a' };
	is_palindrome(v, 0, v.size() - 1) ? std::cout << "Palindrome\n" : std::cout << "Not a palindrome\n";

    std::cout << "GCD of 48 and 18 is: " << gcd(48, 18) << "\n";
}


