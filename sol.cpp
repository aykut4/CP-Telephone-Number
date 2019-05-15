#include <bits/stdc++.h>

using namespace std;

bool solveProblem (const int & digit, const string & seq) {
	if (digit < 11) return false;
	size_t index = seq.find ('8');
	if (index == string::npos) return false;
	if (digit - index < 11) return false;
	return true;	
}

int main (void) {

	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	
	int numTest;
	int digit;
	string sequence;

	cin >> numTest;
	for (int i = 0; i < numTest; i++) {
		cin >> digit >> sequence;
		if (solveProblem (digit, sequence) ) cout << "YES" << '\n';
		else cout << "NO" << '\n';
		
	}
  
	return 0;
}
