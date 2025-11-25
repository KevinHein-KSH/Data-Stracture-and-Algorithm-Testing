#include<iostream>
using namespace std;
class Parent
{
    protected:
        int data;
};
class Child:public Parent{
    public:
        void setData(int d){
            data = d;
        };
        void print(){
            cout<<"Protected data is:"<<data<<endl;
        }
};
int main(){
    int input;
    Child child;
    cout<<"Enter data:";
    cin>>input;
    child.setData(input);
    child.print();
    return 0;
}