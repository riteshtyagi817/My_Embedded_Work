#ifndef DECLARATIONS_H
#define DECLARATIONS_H
//class DistKm;
namespace mywork{

	class DistKm;
	class DistMile{

		public:
			DistMile();
			DistMile(double miles,double meters);
			~DistMile();
			double getMiles();
			double getMeters();
			void printDistMile();
			DistKm operator ()(double miles, double meters);
		private:
			double miles;
			double meters;


	};
	class DistKm{

		public:
			DistKm();
			DistKm(double kms, double mtrs);
			~DistKm();
			double getKms();
			double getMtrs();
			void printDistKm();

		private:
			double kms;
			double mtrs;

	};



} // namespace mywork
#endif
