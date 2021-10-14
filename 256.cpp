#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		// cout<<n<<endl;
		int x = 0;
		int y, div, g;
		int c;
		while(true){
			int left, right, ans;
			y = x*x;
			div = pow(10, n/2);

			left = y/div;

			right = y%div;
			ans = pow(left+right,2);

			if((y<(pow(10, n)))&&(ans==y)){

				cout << setfill('0') <<setw(n)<<y<<endl;

			}
			x+=1;

			if(y>=(pow(10, n)))break;


		}
	}
	return 0 ;
}