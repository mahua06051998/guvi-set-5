#include<iostream>
#include<numeric>

using namespace std;
int main(){
int N,sum=0;
cin >> N;
int arr[N];
for(int i=0;i<N;i++)
  cin >> arr[i];
int r =  accumulate(arr,arr+N,sum);
cout << r/N;
}
