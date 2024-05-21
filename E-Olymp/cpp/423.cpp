//Link: https://www.e-olymp.com/az/problems/423

#include <bits/stdc++.h>
using namespace std;

int convert(string number, int base) {
	int result = 0, power = 0;
	for(int i = number.length() - 1 ; i >= 0 ; i--){
		if(number[i] >= 65)
			result += (number[i]-55) * pow(base, power);
		else
			result += (number[i]-48) * pow(base, power);
		power++;
	}
	return result;
}

int main() {
	int n, age;
	string award = "";
	cin >> n;
	while(n != 0) {
		cin >> age >> award;
		if(age == 100)
			age = 12;
		else if(age >= 10 && age <= 99)
			age = age%10 + 2;
		else
			age += 2;
		cout << convert(award, age) << endl;
		n--;
	}
	return 0;
}
