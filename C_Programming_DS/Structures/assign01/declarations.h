typedef struct Distance
{
	int feet;
	float inches;

}Distance;
Distance * getDistance();
Distance * getSum(Distance *da, Distance *db);
void display(Distance *out);

