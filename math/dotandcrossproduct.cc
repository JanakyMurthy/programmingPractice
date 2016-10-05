#include <iostream>
using namespace std;

/* Author: Janaky murthy */
/* Cross and dot product */
int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int ax,ay,az;
	    cin >> ax >> ay >> az;
	    int bx,by,bz;
	    cin >> bx >> by >> bz;
	    
	    
	    int crossx = ay*bz - by*az;
	    int crossy = ax*bz - az*bx;
	    int crossz = ax*by - ay*bx;
	    
	    /* check parallel */
	     if(crossx==0 && crossy == 0 && crossz==0) cout << "1\n";
	    
	    /* check perpendicular */
	    else if((ax*bx + ay*by + az*bz) == 0) cout <<"2\n";
	    
	    /* neither parallel nor perpendicular*/
	    else cout << "0\n";
	}
	return 0;
}