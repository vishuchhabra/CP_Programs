#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
	private :
	unordered_map<int, vector<int>> book_details;
	unordered_map<int, vector<int>> lib_details;
	unordered_map<int, bool> all_books;
	vector<pair<int, int>> total_profit;
	vector<bool> taken;
	vector<bool> visited;

	public :
		void add_books_to_map(vector<int> book){
			for(auto a : book)
			all_books[a] = true;
		}

	/*	void updateLibrary(vector<vector<int>> lib, vector<int> cost){
			for(int i =0; i < lib.size(); i++){
				for(auto a : lib[i]){
					if(all_books.find(a) != all_books.end()){
						lib_details[i].push_back(a);
					}
				}
			sort(lib_details[i].begin(), lib_details[i].end(), [](const int &m, const int &n){
				return cost[m] >= cost[n];
			});
			}
		 }
*/
		void addLibToBooks(vector<vector<int>> lib){
			for(int i =0; i < lib.size(); i++){
				for(auto a : lib[i]){
					book_details[a].push_back(i);
				}
			}
		}

		/* void addTovisitedList(int numb, int libs){
			taken = vector<bool> test(numb, false);
			visited = vector<bool> test1(libs, false);
		} */

		void addTotalScore(vector<int> cost){
			for(int i = 0; i < lib_details.size(); i++){
				int sum = 0;
				for(auto a : lib_details[i]){
					sum += cost[a];
				}
				total_profit.push_back(sum);
			}
		}

		void sortTotalProfit(){
			sort(total_profit.begin(), total_profit.end(), [](const pair<int, int> &first_pair, const pair<int, int> &second_pair){
				return first_pair.second > second_pair.second;
			});
		}
};

int main(){
	Solution s;
	cout<<"Hello world\n";
}
