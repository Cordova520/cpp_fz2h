#include<iostream>
#include<math.h>

bool isPalindrome(int x) {
        if(x < 0){return false;};
        int divider = 0;
        while(x>0){
            if(x < 10){break;};
            int aux = 0;
            int counter = 0;
            int last_digit = (x/int(pow(10,divider)))%10;
            std::cout << "Last digit: " << last_digit << std::endl;
            int temp_num = x;
            while(x >= 10){
                x = x/10;
                counter++;
            }
            std::cout << "Counter: " << counter << std::endl;
            x = (temp_num / int(pow(10,counter))) % 10;
            std::cout << "First Digit: " << x << std::endl;
            if(x != last_digit){
                return false;
            }else if(x == last_digit){
                aux = x;
                x = temp_num;
                x = x - (aux * pow(10,counter));
                divider++;
            }
        }
        return true;
    }

    int main(){
        bool answer = isPalindrome(1000021);
        std::cout << answer << std::endl;
        return 0;
    }