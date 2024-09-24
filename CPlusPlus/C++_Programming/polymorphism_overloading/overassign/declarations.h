#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class DistFeet{

		public:
			DistFeet();
			DistFeet(double feet, double inches);
			~DistFeet();
			void display();
			double getFeet()const{
				return feet;
			}
			double getInches()const {
				return inches;

			}

		private:
			double feet;
			double inches;

	};
	class DistMeter{

		public:
			DistMeter();
			DistMeter(double meter,double centi);
			~DistMeter();
			DistMeter & operator = (const DistFeet &other);
			void display();
		private:
			double meter;
			double centi;

	};
}
#endif
