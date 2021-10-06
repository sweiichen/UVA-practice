#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<cstdlib>
#include<cstring>

using namespace std;


bool isPrime(int p){
	if(p==2) return true;
	if(p%2 == 0) return false;
	// 3~sqrt(p)
	for(long i = 3; i*i<=p; i+=2){
		if(p%i==0)return false;

	}
	return true;
}

int main(){
	long prime[1000001];
	memset(prime, 0, sizeof(prime));

	prime[0] = 0;
	prime[1] = 0;
	for(int i=2; i<=1000000;i++){
		int p = 0;
		if(isPrime(i)){
			int sum = 0;
			int temp = i;
			while(true){
				sum += temp%10;
				temp = temp/10;
				if(temp==0) break;
			}
			if(isPrime(sum)){p=1;}

		}
		prime[i] =  prime[i-1]+p;

	}


	int n;
	while(scanf("%d",&n)){
		int i;
		for(i=0;i<n;i++){
			int lower_bound, upper_bound, cnt;

			scanf("%d %d", &lower_bound, &upper_bound);
			cnt = prime[upper_bound]-prime[lower_bound-1];
			printf("%d\n",cnt);
			

		}
		if(i==n)break;
		
	}
	return 0;

}

