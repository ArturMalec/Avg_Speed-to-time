#include <iostream>
#include <windows.h>
float time(float, float);

int main()
{
	float track;
	float speed;
	float func;
	int hours, minutes;
	char choice;

	std::cout << "|| Program caluculates time needed to traveling the route ||\n\n";
	do
	{
	std::cout << "Enter distance and average speed: ";
	while (std::cin >> track >> speed)
	{
		try
		{
			func = time(track, speed);
			hours = func;
			minutes = (func - hours) * 60;
		}
		catch (const char * s)
		{
			std::cout << s << std::endl;
			std::cout << "Enter data ones again: ";
			continue;
	}
	std::cout << "Time for travel: " << hours << " h. " << minutes << " min." << std::endl;
	break;
	}
	Sleep(1000);
	std::cout << "Ones Again? T/N >> ";
	std::cin >> choice;
	}
	while (choice == 84 || choice == 116);
	std::cout << "Closing program . . ." << std::endl;
	Sleep(3000);
	return 0;
}

float time(float a, float b)
{
	if (a < 0 || b < 0)
		throw "Digit mustn't be lower than zero!\n";
	float time_;
	time_ = a/b;
	return time_;
}
