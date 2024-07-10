#include<iostream>

class DynamicArray
{
private:
    int *data;
    int nextIndex;
    int capacity; //Total size of the array
public:
    DynamicArray();
    DynamicArray(DynamicArray const &Data){
        this -> nextIndex = Data.nextIndex;
        this -> capacity = Data.capacity;
        ///this -> data = Data.data; This is shallow copy
        //Deep Copy
        this -> data = new int[Data.capacity];
        for (int idx = 0; idx < Data.nextIndex; idx++)
        {
            this->data[idx] = Data.data[idx];
        }
    }

    DynamicArray(int cap){
        data = new int[cap];
        nextIndex = 0;
        capacity = cap;
    }

    void operator=(DynamicArray const &Data){
        this -> nextIndex = Data.nextIndex;
        this -> capacity = Data.capacity;
        ///this -> data = Data.data; This is shallow copy
        //Deep Copy
        this -> data = new int[Data.capacity];
        for (int idx = 0; idx < Data.nextIndex; idx++)
        {
            this->data[idx] = Data.data[idx];
        }
    }

    void add(int element){
        if (nextIndex == capacity)
        {
            int *newData = new int[capacity*2];
            for (int idx = 0; idx < capacity; idx++)
            {
                newData[idx] = data[idx];
            }
            delete []data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int idx) const {
        if (idx>=0 && idx<nextIndex)
        {
            return data[idx];
        }else{
            return -1;
        }
    }

    void add(int element, int idx){
        if (idx < nextIndex)
        {
            data[idx] = element;
        }else if (idx == nextIndex)
        {
            add(element);
        }else{
            return ; 
        }   
    }

    void print() const{
        for (int idx = 0; idx < nextIndex; idx++)
        {
            std::cout << data[idx] << " ";
        }
        std::cout << std::endl;
    }

    int getCapacity() const{
        return capacity;
    }
    ~DynamicArray();
};

DynamicArray::DynamicArray(/* args */)
{
    data = new int[5];
    nextIndex = 0;
    capacity = 5;
}

DynamicArray::~DynamicArray()
{
    std::cout << "Galactus has arrived\n";
}
