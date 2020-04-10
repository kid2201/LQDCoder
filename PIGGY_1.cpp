#include<stdio.h>

typedef long long ll;

#define FOR(i,a,b) for(int i = a;i<=b;i++)
#define FOD(i,a,b) for(int i = a;i>=b;i--)

ll A[1000005], TG[1000005],Kq[1000005],Dem[1000005];

int main()
{
    ll N,M,l,r,q,x;
    scanf("%lld%lld",&N,&M);
	//cin>>N>>M;
	FOR(i,1,M) {
		scanf("%lld%lld",&l,&r);
		//cin>>l>>r;
		TG[l]++;
		TG[r+1]--;
	}
	//cout<<"1\n";
	//FOR(i,1,N) cout<<TG[i]<<" ";
	FOR(i,1,N) A[i] = A[i-1] + TG[i];
	//cout<<"1\n";
	//FOR(i,1,N) cout<<A[i]<<" ";
	FOR(i,1,N) Dem[A[i]]++;
	//cout<<"\n2\n";
	//FOR(i,1,N) cout<<Dem[i]<<" ";
	FOD(i,N,0) Kq[i] = Kq[i+1] + Dem[i];
	//cout<<"1\n";
	//FOR(i,1,N) cout<<Kq[i]<<" ";
	//cin>>q;
	scanf("%lld",&q);
	FOR(i,1,q) {
		scanf("%lld",&x);
		//cin>>x;
		//cout<<Kq[x]<<endl;
		printf("%lld\n",Kq[x]);
	}
	return 0;
}

