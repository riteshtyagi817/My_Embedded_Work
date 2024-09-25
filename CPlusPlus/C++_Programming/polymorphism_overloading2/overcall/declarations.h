#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{


	class DistMile{

		public:
			DistMile();
			DistMile(double miles,double meters);
			~DistMile();
			double getMiles();
			double getMeters();
			void printDistMile();
			Distkm operator ()(const DistMile &other);
		private:
			double miles;
			double meters;


	};
	DistKm{

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
