#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec(10);
vector<bool> visited(10);

void func(int cnt) {
	if(cnt == M) {
		for(int i=0; i<M; i++) {
			cout << vec[i] << " ";
		}
		cout << endl;
      return;
	}
	else {
		for(int i=1; i<=N; i++) {
			if(!visited[i]) {
				visited[i] = true;
				vec[cnt] = i;
				func(cnt + 1);
				visited[i] = false;
			}
		}
	}	
}

int main() {
   cin >> N >> M;
   func(0);
}
