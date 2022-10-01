using namespace std;

int flag;
void solve(int a, int b, int c, int rem, vector<int> v){
    if(rem == 0 and a == c){
        flag = 1;
        v[rem] = c;
        int n = v.size();
        for(int i=n-1; i>=0; i--){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(rem < 0){
        return;
    }
    v[rem] = a;
    solve(a-b, b, c, rem -1, v);
    solve(a+b, b, c, rem -1, v);

    return;    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a, b, c, d;
	    cin>>a>>b>>c>>d;
	    flag = 0;
	    vector<int> v(d+1);
	    solve(a, b, c, d, v);
	    if(flag == 0){
	        cout<<-1<<"\n";
	    }
	}
	return 0;
}
