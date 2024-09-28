#ifndef DECLARATIONS_H
#define DECLARATIONS_H
namespace mywork{
	class StreamDemo{

		public:
			StreamDemo();
			StreamDemo(int val);
			friend istream & operator >> (istream &in,StreamDemo &source);
			friend ostream & operator << (ostream &out,const StreamDemo &source); 

		private:
			int val;

	};
} // mywork namespace

#endif
