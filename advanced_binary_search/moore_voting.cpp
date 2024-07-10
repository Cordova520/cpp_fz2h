#include<iostream>
#include<vector>

class moore_voting
{
private:
    /* data */
public:
    moore_voting(/* args */);
    int majorityElement(std::vector<int> & array){
        int candidate = array[0];
        int count = 1;
        int size = array.size();
        for (int idx = 0; idx < size; idx++)
        {
            if (array[idx] == candidate)
            {
                count++;
            }else {
                count--;
                if (count == 0)
                {
                    candidate = array[idx];
                    count = 1;
                }
            }
        }
        // We can not assume, so we check
        int count2 = 0;
        for (int jdx = 0; jdx < size; jdx++)
        {
            if (array[jdx] ==  candidate)
            {
                count2++;
            }
        }
        if (count2 > size)
        {
            return candidate;
        }else return -1;
        
        // return candidate;
    }
    ~moore_voting();
};

moore_voting::moore_voting(/* args */)
{
}

moore_voting::~moore_voting()
{
}
