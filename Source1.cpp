#include <iostream>
using namespace std;
class SeasonBase
{
public:
	enum Season { winter, spring, summer, autumn };
	Season s1 = winter;
	virtual void Change() = 0;
	virtual ~SeasonBase()

	{
		cout << "Destructor!" << endl;
	}
	void print_Season()
	{
		cout << "Current time of the year: ";
		switch (s1)
		{
		case winter: cout << "winter " << endl;
			break;
		case spring: cout << "spring " << endl;
			break;
		case summer: cout << "summer " << endl;
			break;
		case autumn: cout << "autumn " << endl;
			break;
		}
	}
};

class Seasons : public SeasonBase
{
public:
	void Change() override
	{
		switch (s1)
		{
		case winter: s1 = spring;
			break;
		case spring: s1 = summer;
			break;
		case summer: s1 = autumn;
			break;
		case autumn: s1 = winter;
			break;
		}
	}
};
class ReverseSeason : public SeasonBase
{
public:
	void Change() override
	{
		switch (s1)
		{
		case winter: s1 = autumn;
			break;
		case autumn: s1 = summer;
			break;
		case summer: s1 = spring;
			break;
		case spring: s1 = winter;
			break;
		}
	}
};
int main()
{
	Seasons Season1;
	ReverseSeason Season2;
	Season1.print_Season();
	Season1.Change();
	Season1.print_Season();
	Season1.Change();
	Season1.print_Season();
	Season1.Change();
	Season1.print_Season();
	Season1.Change();
	Season2.Change();
	Season2.print_Season();
	Season2.Change();
	Season2.print_Season();
	Season2.Change();
	Season2.print_Season();
	Season2.Change();
	Season2.print_Season();

}
