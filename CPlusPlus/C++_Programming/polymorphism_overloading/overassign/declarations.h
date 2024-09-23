#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class DistFeet{

		public:
			DistFeet();
			DistFeet(double feet, double inches);
			~DistFeet();
			void display();

		private:
			double feet;
			double inches;

	};
	class DistMeter{

		public:
			DistMeter();
			DistMeter(double meter,double centi);
			~DistMeter();
			DistFeet & operator = (const DistFeet &other);
			void display();
		private:
			double meter;
			double centi;

	};
}
#endif
