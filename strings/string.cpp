#include<iostream>
#include<vector>
#include<algorithm>

int main(){

    std::string word = "abc";
    std::cout << word << std::endl;

    std::string word2;
    word2 = "def";
    std::cout << word2 << std::endl;

    std::string *ptrstr = new std::string;
    *ptrstr = "mno";
    std::cout << ptrstr << std::endl;
    std::cout << *ptrstr << std::endl;

    std::vector<std::string> string_vector;
    string_vector.push_back(word);
    string_vector.push_back("hello");
    for (int idx = 0; idx < string_vector.size(); idx++)
    {
        std::cout << string_vector[idx] << std::endl;
        sort(string_vector[idx].begin(), string_vector[idx].end());
        std::cout << string_vector[idx] << std::endl;
    }
    
    std::string word3;
    // getline(std::cin, word3);
    // std::cout << word3 << std::endl;

    word3 = "abcabc";
    std::cout << word3[1] << std::endl;
    word3[0] = 'd';
    std::cout << word3 << std::endl;

    std::string word4 = "";
    word4 += word3 + word2 + "hello coding";
    std::cout << word2 << std::endl;
    std::cout << word3 << std::endl;
    std::cout << word4 << std::endl;
    std::cout << word4.size() << std::endl;
    std::cout << word4.length() << std::endl;

    std::cout << word4.substr(3) << std::endl;
    std::string word5 = word4.substr(3, 5);
    std::cout << word5 << std::endl;

    std::cout << word4.find("abc") << std::endl;

    int number = 123;
    std::string word6 = std::to_string(number);
    std::cout << word6 << std::endl;
    word6[1] = '4';
    std::cout << word6 << std::endl;

    word6.push_back('5');
    std::cout << word6 << std::endl;
    number = std::atoi(word6.c_str());
    std::cout << number << std::endl;


    return 0;
}