#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class Time{

		public:
		Time();
		Time(int hh, int mm, int ss);
		Time(const Time &other);
		~Time();
		void printTime();
		bool operator < ( const Time &other);
		private:
			int hours;
			int minutes;
			int seconds;
	};
}
#endif
