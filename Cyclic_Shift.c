#include <stdio.h>
#include<math.h>

int main(){
	int t;
    scanf("%d",&t);
	int num[t],l=0;
	for(int i=0;i<t;i++)
	   num[i]=0;
    while(l<t){
		int n,m;
		char c;
		scanf("%d %d %c",&n,&m,&c);
		int b[16]; 
        int i=0; 
        while(n>0){
			b[i]=n%2;
			n=n/2;
			i++;
		}
		for(int j=i;j<16;j++){
			b[j]=0;
		}
		int no=0;    
		if(c=='L' || c=='l'){
		for(int j=0;j<m;j++){
			int a=pow(2,j);
			no=no+(b[(16-m)+j]*a);
		}
			for(int j=0;j<m;j++){
				for(int k=15;k>0;k--){
					b[k]=b[k-1];
				}
				b[0]=0;
			}
		}
		else if(c=='R' || c=='r'){
		for(int j=0;j<m;j++){
			int a=pow(2,(16-m)+j);
			no=no+(b[j]*a);
		}
			for(int j=0;j<m;j++){
			        for(int k=0;k<16;k++){
					b[k]=b[k+1];
				}
				b[15]=0;
			}
		}
		for(int j=0;j<16;j++){
			int a=pow(2,j);
			no=no+(b[j]*a);
		}
		num[l]=no;
		l++; 
    } 
	for(int i=0;i<t;i++){
		printf("%d\n",num[i]);
	}
}
