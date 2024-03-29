// #3 - [https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1#]
#include<bits/stdc++.h>
using namespace std;

class twoStacks {
    int *arr;
    int size;
    int top1, top2;
public:
    twoStacks(){
        size = 100;
        arr = new int[100];
        top1 = -1;
        top2 = size;
    }

    void push1(int x);
    void push2(int x);
    int pop1();
    int pop2();


};

//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    if(top1<top2){
      arr[++top1] = x;
    }else return;
   
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
   if(top1 < top2){
       arr[--top2] = x;
   }else return;

}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1==-1){
        return -1;
    }else {
        return arr[top1--];
    }

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2 == size){
        return -1;
    }else{
        return arr[top2++];
    }

}
