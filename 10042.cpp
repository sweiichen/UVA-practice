#include<iostream>
#include<iomanip>
#include<algorithm>
#include<stdio.h>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        a++;
        int temp;
        
        while(true){
            int flag = 0;
            temp = a;
            int j = 1;
            int p_sum = 0;
            int temp_p;
            
            for(j=2; j<=sqrt(a)&&temp>1; ++j){
                temp_p = j;
                int pp_sum=j%10;
                
                while(temp_p/10>0){
                    temp_p = temp_p/10;
                    pp_sum += temp_p%10;
                }
               
                while(temp%j==0){
                    p_sum += pp_sum;
                    temp = temp/j;
                    
                }
                
                
            }
            if(temp>1&&temp!=a){
                p_sum += temp%10;
                while(temp/10>0){
                    temp = temp/10;
                    p_sum += temp%10;
                }
               
            }
            if(temp==a){
                a++;
                continue;
            }
            temp = a;
            int a_sum = temp %10;
            while(temp/10>0){
                temp = temp/10;
                a_sum += temp%10;
                
                if(a_sum>p_sum)break;

            }

            if(a_sum==p_sum){
                cout<<a<<endl;
                break;
            }
            
            else a++;
            // break;
        }

    }
    return 0;
}