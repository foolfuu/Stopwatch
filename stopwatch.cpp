#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	int h,
		m,
		s;
	h = 0;
	m = 0;
	s = 0;
	
	while(1)
	{
		Sleep(1000);
		cout<<h<<":"<<m<<":"<<s<<endl;
		++s;
		if(s == 60)
		{
			m = 1;
			s = 0;
		}
		if(m == 60)
		{
			h = 1;
			m = 0;
		}
	}
	getch();
	return 1;
}