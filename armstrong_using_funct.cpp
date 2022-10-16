#include <iostream>
using namespace std;

int power(int N,  int D)
{
	if (D == 0)
		return 1;

	if (D % 2 == 0)
		return power(N, D / 2)
			* power(N, D / 2);

	return N * power(N, D / 2)
		* power(N, D / 2);
}


int order(int N)
{
	int r = 0;


	while (N) {
		r++;
		N = N / 10;
	}
	return r;
}


int Armstrong(int N)
{

	int D = order(N);

	int temp = N, sum = 0;


	while (temp) {
		int Ni = temp % 10;
		sum += power(Ni, D);
		temp = temp / 10;
	}


	if (sum == N)
		return 1;
	else
		return 0;
}


int main()
{

	int N = 153;


	if (Armstrong(N) == 1)
		cout << "The number is an Armstrong";
	else
		cout << "The number is not an Armstrong";
	return 0;
}
