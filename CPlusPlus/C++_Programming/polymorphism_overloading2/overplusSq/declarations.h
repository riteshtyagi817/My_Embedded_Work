#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class Square{
		public:
			Square();
			Square(double side);
			~Square();
			Square operator + (const Square &other);
			double getSide();
			void printArea();
			double getArea();
		private:
			double side;
	};
}
#endif
