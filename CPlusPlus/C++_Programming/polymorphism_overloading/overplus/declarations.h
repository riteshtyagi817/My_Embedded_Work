#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class Circle{
		public:
			Circle();
			Circle(double radius);
			~Circle();
			Circle operator + (const Circle &other) const;
			Circle(const Circle &other);
			double getRadius();
		private:
			double radius;

	};
}
#endif
