#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int T, i;
    cin>>T;
    
    for(i=0;i<T;++i){
        char a1[100][100];
        int M, N, Q;
        cin>>M>>N>>Q;
        int j, k, q;
        for(j=0; j<M;++j){
            for(k=0;k<N;++k){
                cin>>a1[j][k];
            }
        }
        cout<<M<<" "<<N<<" "<<Q<<endl;
        // printf("%d %d %d\n", M, N, Q);
        for(j=0;j<Q;++j){
            
            cin>>k>>q;
            if((k==0)|(q==0)|(k==M-1)|(q==N-1)){
                cout<<1<<endl;
                continue;
            }
            int max_length, max_width;
            if(N-k>k) max_length = k;
            else max_length = N-k;
            if(M-q>q) max_width = q;
            else max_width = M-q;
            int square = 1;
            int sub = 1;
            int c, r;
            int flag = 0;
            while(true){

                for(c=k-sub;c<=k+sub;++c){
                    // cout<<a1[c][q-sub];
                    if(a1[c][q-sub]!=a1[k][q]){
                        flag=1;
                        cout<<"hi"<<endl;
                        break;
                        }
                    
                }
                if(flag==1)break;
                for(c=k-sub;c<=k+sub;++c){
                    if(a1[c][q+sub]!=a1[k][q]){
                        flag=1;
                        break;
                    }
                    
                }
                if(flag==1)break;
                for(c=q-sub+1;c<q+sub;++c){
                    if(a1[k-sub][c]!=a1[k][q]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
                for(c=q-sub+1;c<q+sub;++c){
                    if(a1[k+sub][c]!=a1[k][q]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
                square+=2;
                
                sub+=1;
                if(((k-sub)<0)|((k+sub)>M-1)|((q-sub)<0)|((q+sub)>N-1))break;
            }
            cout<<square<<endl;

            

        }

    }

    return 0;
}