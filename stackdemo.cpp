#include <iostream>  
  
using namespace std;  
  
template <typename T>  
class stack{  
  public:  
    stack (int size){  
megethos=size;  
arr=new T[megethos];  
top=-1;  
  
}  
    stack (const stack &s){  
megethos=s.megethos;  
arr=new T[megethos];  
top=s.top;  
for(int i=0;i<=s.top;i++)  
arr[i]=s.arr[i];  
    }  
    ~stack (){  
      delete [] arr;  
    }  
    const stack & operator = (const stack &s){  
      megethos=s.megethos;  
delete [] arr;  
arr=new T[megethos];  
top=s.top;  
for (int i=0;i<=s.top;i++)  
arr[i]=s.arr[i];  
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
int megethos;  
    int top;  
    T *arr;  
};  