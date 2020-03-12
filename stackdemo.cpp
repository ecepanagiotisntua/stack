#include <iostream>

using namespace std;

template <typename T>
class stack {
public:
stack (int size) {
arr = new T[size];
}
stack (const stack &s) {
arr = new T[s.size()];
arr = s;
}
~stack ();

bool empty () { return top==0; }
void push (const T &x) { arr[top++]=x; }
T pop () { return arr[--top]; }
int size () { 
return (sizeof(arr)/sizeof(arr[0]));
}

friend ostream & operator << (ostream &out, const stack &s) {
cout<<"[";
for(int i=0;i<s.size()-1;i++){
cout<<arr[0]<<", ";
}
cout<<arr[i]<<"]"<<endl;
}

private:
int top=0;
};
