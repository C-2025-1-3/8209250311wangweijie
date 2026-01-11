#include<iostream>
using namespace std;
class V_Rec
{
 private:
	 int length;
	 int width;
	 int height;
public:
	void Cin()
	{
		cout << "please" << "\t" << "input";
		cin >>length >> width >> height;
	}
	void Cout()
	{
		int V;
		 V = length * width * height;
		 cout << V;
	}
};

int main()
{
	V_Rec R1,R2,R3;
	R1.Cin();
	R1.Cout();
	R2.Cin();
	R2.Cout();
	R3.Cin();
	R3.Cout();
}