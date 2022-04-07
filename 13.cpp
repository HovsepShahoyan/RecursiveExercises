#include <iostream>
#include <string>

std::string isPalindrome(std::string str)
{
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.size() - i - 1]) {
            return "Is not Palindrome";
        }
    }
    return "Is Palindrome";
}

int main(){
	std::string str = " ";
	std::cout << "Input the String: ";
	std::cin >> str;
	std::cout << "The result is: " << isPalindrome(str);
}
