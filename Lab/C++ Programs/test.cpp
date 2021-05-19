#include<iostream>
using namespace std;
class measure{
	int yard,inch;
	static int count;
	public:
		void get()
		{
			cout<<"Enter the yard and inch"<<endl;
			cin>>yard>>inch;
		}
		measure()
		{
			yard =inch =0;
		}
		void inc()
		{
			count++;
		}
		static void show()
		{
			cout<<"\n count ="<<count<<endl;
		}
		measure operator +(measure me)
		{
			measure m;
			m.yard = yard+me.yard;
			m.inch = inch+ me.inch;
			return m;
		}
		void display()
		{
			cout<<yard*36+inch<<endl;
		}
	
};
int measure::count;
int main()
{
	measure m1,m2,m3;
	m1.get();
	m1.inc();
	m2.get();
	m2.inc();
	m3.inc();
	m3=m1+m2;
	measure::show();
	m3.display();
	return 0;	
}