#include<iostream>

//#define SUMMER "SUMMER"
//#define SPRING "SPRING"
//#define AUTUMN "AUTUMN"
#define WINTER "WINTER"



#if defined(SPRING)
int main() {
	std::cout << SPRING;
}
#elif defined(SUMMER)
int main() {
	std::cout << SUMMER;
}
#elif defined(AUTUMN)
int main() {
	std::cout << AUTUMN;
}
#elif defined(WINTER)
int main() {
	std::cout << WINTER;
}
#endif