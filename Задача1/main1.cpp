#include<iostream>

#define MOND "MOND"
#define TUES "TUES"
#define WEDNES "WEDNES"
#define TRURS "TRURS"
#define FRI "FRI"
#define SATUR "SATUR"
#define SUN "SUN"

#define DAY "DAY"

#define MONDDAY 
#define TUESDAY 
#define WEDNESDAY 
#define TRURSDAY 
#define FRIDAY 
#define SATURDAY 
#define SUNDAY 

#define NUMBER(a,b) a # b

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