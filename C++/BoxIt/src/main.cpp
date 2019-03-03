#include <iostream>

using namespace std;

class Box {
    private:
        int l, b, h;
    public:
        Box();
        Box(int length, int breadth, int height);
        Box(const Box& B);

    int getLength() {
        return l;
    };
    int getBreadth() {
        return b;
    };
    int getHeight() {
        return h;
    };
    long long CalculateVolume() {
        return (long long) l * b * h;
    };

    bool operator<(Box& Box) {
        if (
            (l < Box.l) || 
            ((b < Box.b) && (l == Box.l)) || 
            ((h < Box.h) && (b == Box.b) && (l == Box.l))
           ) {
            return true;
        }
        else {
            return false;
        }
    }
};

ostream& operator<<(ostream& out, Box B) {
    cout << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

Box::Box() {
       l = 0;
       b = 0;
       h = 0; 
    }

Box::Box(int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
}
Box::Box(const Box& B) {
    l = B.l;
    b = B.b;
    h = B.h;
}

/**
 * Bad formatting due to copy from HackerRank site
 */
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
