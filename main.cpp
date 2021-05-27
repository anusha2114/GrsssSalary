#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   	int tests;
	cin>>tests;

	for(int t=1; t<=tests; t++){
		float salary;
		cin>>salary;
		float hra,da;
		cout<<fixed<<setprecision(2);
		if(salary<1500){
			hra=0.1*salary;
			da=0.9*salary;
		}
		else{
			hra=500.00;
			da=0.98*salary;
		}
		cout<<(salary+hra+da)<<endl;
	}

	return 0;
}
