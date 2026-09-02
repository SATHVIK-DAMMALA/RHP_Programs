#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <map>
using namespace std;

void solve(){
	int R; cin >> R;
	map<int,vector<pair<int,int>>> graph;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	set<int> visited;
	
	while(R--){
		int src, dest, dis; cin >> src >> dest >> dis;
		graph[src].emplace_back(make_pair(dest,dis));
		graph[dest].emplace_back(make_pair(src,dis));
	}
	
	int st, end; cin >> st >> end;
	pq.push(make_pair(0,st));
	while(!pq.empty()){
		auto[currDist,currCity] = pq.top(); pq.pop();
		if(currCity == end){
			cout << currDist << endl; return;
		}
		if(!visited.contains(currCity)){
			visited.insert(currCity);
			for(auto[otherCity, otherDist] : graph[currCity]){
				if(!visited.contains(otherCity)){
					pq.emplace(make_pair(otherDist+currDist,otherCity));
				}
			}
		}
	}
	cout << "City " << end << " is not reachable from City " << st << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc=1;
	while(tc--) solve();
}
