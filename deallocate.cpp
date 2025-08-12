#include<iostream>
using namespace std;
int main(){int*ptr = NULL;
ptr = new int(10);
if (!ptr){
    cout<<"allocation of memory failed";
    exit(0);
}
    cout<<"value of *p:"<< *ptr<<endl;
    ptr = new int[3];
    ptr[2]=11;
    ptr[1]=22;
    ptr[0]=33;
    cout<<"array:";
    for ( int i=0;i<3;i++)
    cout << ptr[i]<<"";
    return 0;
}