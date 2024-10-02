#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{

	class Char{
		public:
			Char();
			Char(char ch);
			~Char();
			void display();
			operator int() const;
		private:
			char val;

	};
	
} // mywork namespace

#endif
