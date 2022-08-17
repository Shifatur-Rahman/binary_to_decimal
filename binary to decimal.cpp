#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int main(){

string num;
int i,size,pos,result=0;
cin>>num;
size = num.length();
pos = size - 1;

for(i=0; i<size; i++){
	result += (num[i]-'0') * pow(2,pos);
	pos--;
}
cout<<result;
}
