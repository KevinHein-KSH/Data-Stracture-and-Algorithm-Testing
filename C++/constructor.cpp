#include<iostream>
using namespace std;
class Dog{
    public:
        int age;
        int weight;
    Dog(){
        age = 5;
        weight = 15;
    }
};
class YellowDog{
    public:
        int age;
        int weight;
    YellowDog(int a, int w){
        age = a;
        weight = w;
    }
};
class CConstructor{
    private:
        int data1, data2;
    public:
    CConstructor(int x, int y){
        data1 = x;
        data2 = y;
    }
    CConstructor(const CConstructor &sam) // obj creation 
    {
        data1 = sam.data1 + 1;
        data2 = sam.data2 + 1;
    }
    void display(){
        cout<<data1<<" "<<data2<<endl;
    }
};
int main(){
    Dog dog;
    YellowDog ydog(2, 9);
    cout<<"My dog age is "<<dog.age<<endl;
    cout<<"My dog weight is "<<dog.weight<<"kg"<<endl;
    cout<<"My Yellow dog age is "<<ydog.age<<endl;
    cout<<"My Yellow dog weight is "<<ydog.weight<<"kg"<<endl;
    CConstructor obj1(10,15);
    CConstructor obj2(obj1);
    cout<<"Normal:";
    obj1.display();
    cout<<"Copy:";
    obj2.display();
    return 0;
}