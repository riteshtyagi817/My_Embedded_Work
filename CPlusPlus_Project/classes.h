#ifdef CLASSES_H
#define CLASSES_H
class Library{

	public:
		Library();
	private:
		string libName;
	protected:
		static int countMembers;
		static int countBooks;
		static int books;
		static int countDvds;
		static int countPeriodicals;

};
class Book:public Library{
	public:
		Book();
	private:
		char *author;




};



#endif
