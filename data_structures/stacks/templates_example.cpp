#include <iostream>
#include "templates.cpp"

int main(){

    // Pair<int> pair_1;
    // pair_1.setX(1);
    // pair_1.setY(2);
    // std::cout << pair_1.getX() << " " << pair_1.getY() << std::endl;

    // Pair<double> pair_2;
    // pair_2.setX(1.73);
    // pair_2.setY(2.21);
    // std::cout << pair_2.getX() << " " << pair_2.getY() << std::endl;

    Pair<int, double> pair_2;
    pair_2.setX(1);
    pair_2.setY(2.21);
    std::cout << pair_2.getX() << " " << pair_2.getY() << std::endl;

    Pair<Pair<int, int>, int> pair_4;
    pair_4.setY(30);
    Pair<int, int> temp;
    temp.setX(10);
    temp.setY(20);
    pair_4.setX(temp);
    std::cout << pair_4.getX().getX() << " " << pair_4.getX().getY() << " " << pair_4.getY() << std::endl;

    return 0;
}