#include<iostream>
using namespace std;
int main()
{
long long int N,c=0;
cin >> N;
while(N>0){
  N /=10;
  c++;
}
cout << c;

}

