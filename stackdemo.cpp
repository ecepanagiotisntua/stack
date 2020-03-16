#include <iostream>


using namespace std;

template <typename T>
class stack{
  public:
    stack (int size): top(-1), arr(new T [size]) {}
    stack (const stack &s): top(s.top), arr(new T [sizeof(s.arr)/sizeof(T)]){
      for (int i=0; i<=top; i++) arr[i]=s.arr[i];
    }
    ~stack (){
      delete [] arr;
    }
    const stack & operator = (const stack &s){
      for (int i=0; i<=s.top; i++) arr[i]=s.arr[i];
      top=s.top;
      return *this;
    }

    bool empty(){
      return top==-1;
    }
    void push (const T &x){
      arr[++top]=x;
    }
    T pop(){
      T x=arr[top];
      top--;
      return x;
    }
    int size(){
      return top+1;
    }

    friend ostream & operator << (ostream &out, const stack &s){
      out<<"[";
      for (int i=0; i<s.top; i++) out<<s.arr[i]<<", ";
      if (s.top>=0) out<<s.arr[s.top];
      out<<"]";
      return out;
    }

  private:
    int top;
    T *arr;
};

