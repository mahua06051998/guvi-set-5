#include<bits/stdc++.h>

using namespace std;

int main()
{
int N;
cin >> N;
int arr[N];
for(int i=0;i<N;i++){
   cin >> arr[i];
}

   int *li = min_element(arr,arr+N);
   cout << *li << " ";
   li =  max_element(arr,arr+N);
   cout << *li;
}

