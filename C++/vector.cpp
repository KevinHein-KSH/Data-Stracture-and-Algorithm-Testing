// at()
// front(), back()
// push_back()
// begin(), end()
// rbegin(), rend()

// insert() 2 parameter is (loaction, value), 3 parameter is (location, quentity, value)
// size(), pop_back()
// cbegin(), cend()

// resize(), shrink_to_fit()
// emplace()
// erase()

#include<iostream>
#include<vector>
#include<iterator>
#define SIZE 10
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;
    cout<<"******************************************"<<endl;

    vector<int> myVec;
    cout<<"0. size of vector:"<<myVec.size()<<endl;
    for (int i = 1; i < 6; i++)
    {
        myVec.push_back(i);
    }
    cout<<"1. size of vector after push_back:"<<myVec.size()<<endl;
    
    vector<int>:: iterator ptr;
    cout<<"The elements in integer the vector:";
    for (ptr = myVec.begin(); ptr != myVec.end(); ptr++)
    {
        cout<<" "<<*ptr;
    }
    cout<<"\nThe elements in the reverse vector:";
    for (auto i = myVec.rbegin(); i < myVec.rend(); i++)
    {
        cout<<" "<<*i;
    }
    cout<<"\n******************************************"<<endl;

    vector<string> svec;
    svec.push_back("v_fist");
    svec.push_back("v_second");
    svec.push_back("v_third");
    svec.push_back("v_fourth");
    svec.push_back("v_fifth");
    cout<<"Overwrite the elements in the integer vector:";
    for (ptr = myVec.begin(); ptr != myVec.end(); ptr++)
    {
        *ptr = 11;
        cout<<" "<<*ptr;
    }
    cout<<"\nThe elements in the string vector:";
    for (auto c = svec.cbegin(); c < svec.cend(); c++)
    {
        // *c = 11; Error will occur!, can't modify.
        cout<<" "<<*c;
    }
    cout<<"\n******************************************"<<endl;
    vector<int> valVec={1,2,3,4,5,6};
    auto val = valVec.insert(valVec.begin(), 0);
    valVec.insert(val, -1);
    cout<<"The elements in integer prefix the vector:";
    for (ptr = valVec.begin(); ptr != valVec.end(); ptr++)
    {
        cout<<" "<<*ptr;
    }
    cout<<"\n2. size of vector after insert() 2 parameter:"<<valVec.size()<<endl;
    valVec.insert(valVec.end(),10, 101);
    cout<<"3. size of vector after insert() 3 parameter:"<<valVec.size()<<endl;
    valVec.pop_back();
    cout<<"4. size of vector after pop_back():"<<valVec.size()<<endl;
    cout<<"every elements in the vector:"<<endl;
    for (ptr = valVec.begin(); ptr != valVec.end(); ptr++)
    {
        cout<<" "<<*ptr;
    }
    cout<<"\n******************************************"<<endl;
    vector<int> lol(SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        lol[i] = i+1;
    }
    cout<<"initial size:"<<lol.size()<<endl;
    cout<<"initial size: elements in the vector:"<<endl;
    for (auto z = lol.begin(); z != lol.end(); z++)
    {
        cout<<" "<<*z;
    }
    lol.resize(5);
    cout<<"\nresize(5):"<<lol.size()<<endl;
    cout<<"after resize() elements in the vector:"<<endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout<<" "<<lol[i];
    }
    lol.shrink_to_fit();
    cout<<"\nshrink_to_fit() size :"<<lol.size()<<endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout<<" "<<lol[i];
    }cout<<endl;
    for (int i = 0; i < lol.size(); i++)
    {
        cout<<" "<<lol[i];
    }
    cout<<"\n******************************************"<<endl;
    vector<int> em = {1,2,3,4,5};
    em.emplace(em.begin(),100);
    em.emplace(em.begin()+2,69);
    cout << "All the vector elements are ";
    for (ptr = em.begin(); ptr != em.end(); ptr++)
    {
        cout<<" "<<*ptr;
    }
    vector<int> myVector;
    for (int i = 1; i <= 10; i++)
    {
        myVector.push_back(i);
    }
    myVector.erase(myVector.begin(),myVector.begin()+3);
    myVector.erase(myVector.begin()+5);
    cout <<"\nAll the vector elements are ";
    for (ptr = myVector.begin(); ptr != myVector.end(); ptr++)
    {
        cout<<" "<<*ptr;
    }
    cout<<endl;
    return 0;
}
