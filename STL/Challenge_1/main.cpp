// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    std::deque<char> deq;
    char front, back;
    for(int i = 0; i< s.size(); i++)
        deq.push_back(s[i]);
    // You must implement this function.
    int i=0;
    while(deq.size() > 0){
        if(deq.size() == 1){
            return true;
        }
        back = deq.back();
        front = deq.front();
        if(back != front){
            return false;
        }
        deq.pop_back();
        deq.pop_front();
    }
    // Since we are learning the STL - use a deque to solve the problem.
    return true;
}

int main()
{

    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
    
}