#include<iostream>

#define MOND 
#define TUES 
#define WEDNES 
#define TRURS 
#define FRI 
#define SATUR 
#define SUN 

#define DAY 

#define MONDDAY "MONDAY"
#define TUESDAY "TUESDAY" 
#define WEDNESDAY "WEDNESDAY" 
#define TRURSDAY "TRURSDAY" 
#define FRIDAY "FRIDAY" 
#define SATURDAY "SATURDAY"
#define SUNDAY "SUNDAY" 

#define NUMBER(a,b) a ## b

int main() {
	std::cout << "Input the day of the week number: ";
	int answer;
	std::cin >> answer;
	if (answer == 1) {
		std::cout << NUMBER(MOND, DAY);
	}
	else if (answer == 2) {
		std::cout << NUMBER(TUES, DAY);
	}
	else if (answer == 3) {
		std::cout << NUMBER(WEDNES, DAY);
	}
	else if (answer == 4) {
		std::cout << NUMBER(TRURS, DAY);
	}
	else if (answer == 5) {
		std::cout << NUMBER(FRI, DAY);
	}
	else if (answer == 6) {
		std::cout << NUMBER(SATUR, DAY);
	}
	else if (answer == 7) {
		std::cout << NUMBER(SUN, DAY);
	}
}