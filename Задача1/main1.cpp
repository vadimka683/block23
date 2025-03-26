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

#define NUMBER(a) a ## DAY

int main() {
	std::cout << "Input the day of the week number: ";
	char answer;
	std::cin >> answer;
	switch (answer)
	{
	case'1':std::cout << NUMBER(MOND); break;
	case'2':std::cout << NUMBER(TUES); break;
	case'3':std::cout << NUMBER(WEDNES); break;
	case'4':std::cout << NUMBER(TRURS); break;
	case'5':std::cout << NUMBER(FRI); break;
	case'6':std::cout << NUMBER(SATUR); break;
	case'7':std::cout << NUMBER(SUN); break;
	default: break;
	}
}