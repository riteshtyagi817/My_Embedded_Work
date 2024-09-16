#ifndef DECLARATIONS_H
#define DECLARATIONS_H
struct Time{
	int hour;
	int min;
	int sec;

};
class TimeDiff{

	public:
	TimeDiff();
	TimeDiff(Time t);
	TimeDiff(const TimeDiff &other);
	~TimeDiff();
	void display();
	void timeDiff(TimeDiff &other);
	private:
	Time time;

};
#endif
