#include <iostream>
using namespace std;

class Dynamicarr{
    int* arr;
    int size;
    int capacity;
 
    public:
    Dynamicarr(int initial){
        size=0;
        
        capacity=initial;
        arr=new int[capacity];
    }

    void insert(int element){
        if(size==capacity){
            cout<<"Array is full resize array"<<endl;
        
        int newcapacity=capacity*2;
        int* newarr=new int[newcapacity];
        for(int i=0;i<size;i++){
            newarr[i]=arr[i];
        }   
        delete[] arr;
        arr=newarr;
    }

        arr[size]=element;
        size++;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free memory
    ~Dynamicarr() {
        delete[] arr;
    }

};



int main(){
    Dynamicarr d(2);
    d.insert(10);
    d.insert(20);
    d.insert(30);
    
    d.display();
    return 0;

}