#include<bits/stdc++.h>
using namespace std ;
bool islucky(int);
int main(){
	int n = 7;
	
	if(islucky(n)){
		cout << n <<  " IS Lucky number " ;
	}
	else
		cout << " not lucky number ";
 }
 bool islucky( int n){
 	static int c = 2;
 	if(n%c == 0){
 		return 0;
 	}
 	if(c > n)
 		return 1;

 	int np = n;
 	np = np - np/c;
 	c++;
 	return islucky(np);
 }