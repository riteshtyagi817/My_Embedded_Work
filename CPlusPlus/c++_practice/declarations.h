class FeetInch
{
	int feet;
	float inches;
	public:
	FeetInch(int ft, double inch):feet(ft),inches(inch){}
	void getDistance();
	int getFeet();
	float getInches();
};
class MetreCm
{
	int metre;
	float cm;
	public:
	MetreCm(int m, float centi):metre(m),cm(centi){}
	void getDistance();
	void convertMtCm(FeetInch &obj);
	void display(FeetInch &obj);

};
