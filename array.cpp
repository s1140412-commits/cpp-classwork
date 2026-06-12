#include <iostream>
using namespace std;

int main()
{
    double catweight[6] = {11.2, 10.8, 10.4, 11.5, 12.0, 13.0};
    double sum = 0;
    for  (int i=0,i<=5; i++){
    	 sum = sum+ catweight[i];
	}
count<<"貓咪的平均體:" <<sum/6; 
     return 0;
}
