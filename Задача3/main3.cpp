#include<iostream>
#include<vector>

#define PUSH_TRAIN(train1,push) {push(train1);}

#define CHECK_OVER(train1,void_check) { \
	int temp = 0; \
	for(int i = 0; i < 10; i++){ \
		void_check(train1[i], temp); \
	} \
	if (void_check == chek_over_push){ \
		std::cout << "Over push wagon: " << temp << " "; \
	}else if (void_check == chek_low_push){ \
		std::cout << "Low push wagon: " << temp << " "; \
	}else if (void_check == check_all){ \
		std::cout << "Count all peaple in wagon: " << temp << " "; \
	} \
}

void push_train(std::vector<int>& train) {
	for (int i = 0; i < 10; i++) {
		std::cout << "Input count peaple in " << i << "wagon: ";
		int count;
		std::cin >> count;
		train.push_back(count);
	}
}

void chek_over_push(int& p,int& over) {
	if (p > 20) {
		over++;
	}
}

void chek_low_push(int& p, int& over) {
	if (p < 20) {
		over++;
	}
}

void check_all(int& p, int& all) {
	all += p;
}

int main() {
	std::vector<int> train;
	PUSH_TRAIN(train, push_train);
	CHECK_OVER(train, chek_over_push);
	CHECK_OVER(train, chek_low_push);
	CHECK_OVER(train, check_all);
}