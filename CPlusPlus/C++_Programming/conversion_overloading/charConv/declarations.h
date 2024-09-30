#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{

	class Int{
		public:
			Int();
			Int(uint8_t value);
			~Int();
			void display();
			operator char() const;


		private:
			uint8_t value;

	};
	



} // mywork namespace

#endif
