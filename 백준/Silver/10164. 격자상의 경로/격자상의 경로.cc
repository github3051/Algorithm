#include <cstdio>
int main(void){
	int N, M, K, Cx, Cy, cnt=0;
	scanf("%d %d %d",&N, &M, &K);
	long long int dp[16][16]={};
	dp[1][1]=1;
	for(int i=1; i<=N; i++)
		for(int j=1; j<=M; j++){
			dp[i][j] += dp[i-1][j]+dp[i][j-1];
	}
	if(K!=0){
		if(K%M!=0){
			Cy=K%M;
			Cx=(K-Cy)/M+1;
		}
		else{
			Cx=K/M;
			Cy=M;
		}
	}
	if(K==0)	printf("%lld",dp[N][M]);
	else	printf("%lld",dp[Cx][Cy]*dp[N-Cx+1][M-Cy+1]);
}