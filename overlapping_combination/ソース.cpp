#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long int nd;
long long int k;
vector<long long int> A;
void overlapping_combination(long long int s,long long int t) {
	if (s == nd&&t == 0) {
		for (long long int i = 0; i < A.size(); i++) {
			cout << A[i] << " ";
		}
		cout << endl;
		return;
	}
	if (s == nd && t != 0) {
		return;
	}
	for (long long int i = 0; i <= t; i++) {
		A[s] = i;
		overlapping_combination(s + 1, t - i);
	}
}

int main() {
	cin >> nd>> k;
	A.resize(nd);
	overlapping_combination(0, k);
	return 0;
}
