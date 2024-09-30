#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{

	class Distance{

		public:
			Distance();
			Distance(int feet, int inches);
			~Distance();
			//float operator float(Distance &source);
			operator float();
			void display();
			
		private:
			int feet;
			int inches;

	};




}// mywork namespace 
#endif
