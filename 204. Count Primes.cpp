
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int countPrimes(int n) {
    if (n<=2) return 0;
	vector<bool> succ(n, false);
	int sum = 1;
	int upper = sqrt(n);
	for (int i=3; i<n; i+=2) {
		if (!succ[i]) {
			sum++;
			//avoid overflow
			if (i>upper) continue;
			for (int j=i*i; j<n; j+=i) {
				succ[j] = true;
			}
		}
	}
	return sum;
}
};
