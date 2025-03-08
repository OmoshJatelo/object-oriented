#include <iostream>
#include<math.h>

using namespace std;

class Rectangle{
private:
	float length;
	float width;
public:
	void initialize(float len, int wid)
	{
		length=len;
		width=wid;
	}
	int area()
	{
		return length*width;
	}
	int perimeter()
	{
		return 2*(length+width);
	}
	float diagonal()
	{
		return sqrt(length*length+width*width);
	}

};

int main()
{
	float length,width;
    cout << "with this program, you can perform various operations on a rectangle. enter the following dimensions" << endl;
    cout<<"Length : ";
    cin>>length;
    cout<<"Width: ";
    cin>>width;
    Rectangle rectangle1;
    rectangle1.initialize(length,width);
    cout<<"the area of the rectangle is "<<rectangle1.area()<<"cm^2"<<endl;
    cout<<"the length of the diagonals is "<<rectangle1.diagonal()<<"cm"<<endl;
    cout<<"its perimeter is "<<rectangle1.perimeter()<<"cm"<<endl;
    return 0;
}
