#include <iostream>
#include <format>
using namespace std;

int main() {

	const int max_size{ 100 };
	int array_a[max_size]{2};
	int counter{ 1 };
	int trial{ 3 };
	cout << array_a;
	while (counter < max_size) {

		if (trial % (*array_a) > 0) {
			*(array_a + counter) = trial;
			counter++;
		}
		
		trial += 2;
	}

	cout << "output without for-loop " << endl;

	int* p = array_a;
	int count_output{ 0 };
	int ten{ 0 };
	while (count_output < max_size) {
		ten++;
		cout <<format("{:10}",(*(p++)));
		count_output++;
		if (ten == 10) {
			cout << endl;
			ten = 0;
		}
		
	}

	cout << endl << endl;

	cout << "output without for-loop reverse " << endl<<endl;

	int* a = array_a+(max_size-1);
	count_output = 0;
	ten = 0;

	while (count_output < max_size) {
		ten++;
		cout << format("{:10}", (*(a--)));
		count_output++;
		if (ten == 10) {
			cout << endl;
			ten = 0;
		}
		
	}

	return 0;
}