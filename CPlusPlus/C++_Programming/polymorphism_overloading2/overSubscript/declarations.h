#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{

	class Subscript{
		public:
			Subscript();
			int & operator[](int i);


		private:
			int arr[10];


	};

} // mywork namespace
#endif
