#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class Rectangle{
		public:
			Rectangle();
			Rectangle(int len, int brd);
			~Rectangle();
			Rectangle operator + (const Rectangle &other) const;
			Rectangle(const Rectangle &other);
			int getLength();
			int getBreadth();
		private:
			int length;
			int breadth;

	};
}
#endif
