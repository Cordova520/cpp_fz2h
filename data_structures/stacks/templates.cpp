#include <iostream>

template<typename T, typename V>
class Pair
{
private:
    T x;
    // T y;  ///This is used for single template
    V y;
public:
    void setX(T x){
        this -> x = x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this -> y = y;
    }
    V getY(){
        return y;
    }
    Pair(/* args */){
    }
};







