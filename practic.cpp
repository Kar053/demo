#include <iostream>
using namespace std;

int main()
{
    int array[]={32,34,56,78,45};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }
    cout<<sum;

    return 0;
}