#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int f[n];
		stack <int> st;
		for(int i = 0; i < n; i++){
			if(st.empty()){
				st.push(i);
			}
			else{
				while(!st.empty() && a[i] > a[st.top()]){
					f[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			f[st.top()] = -1;
			st.pop();
		}
		for(int i : f) cout << i << " ";
		cout << endl;
	}
	return 0;
}

