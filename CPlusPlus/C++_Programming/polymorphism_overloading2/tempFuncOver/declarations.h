#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{

	class TempFar;
	class TempDeg{

		public:

			TempDeg();
			TempDeg(double degree);
			~TempDeg();
			void display();
			TempFar operator()(double degree);


		private:
			double temp_deg;


	};
	class TempFar{

		public:
			TempFar();
			TempFar(double far);
			~TempFar();
			void display();
			TempDeg operator()(double temp_far);

		private:
			double temp_far;

	};



}// namespace mywork
#endif
