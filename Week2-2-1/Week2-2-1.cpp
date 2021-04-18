#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n,temp;
	cin >> n;
	vector<int> arr;
	for (int i=0;i<n;i++) {
		cin >> temp;
		arr.push_back(temp);
	}
	vector<int> res;
	int medium = 0;
	for (auto i : arr)
		medium+=i;
	medium = medium / n;
	for (int i = 0; i < n; i++)
		if (arr[i] > medium)
			res.push_back(i);
	cout << res.size() << endl;
	for (auto i : res)
		cout << i << ' ';
}
