#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	

class POLESTICO{ //gagama ug class nga ang ngalan kay POLESTICO

	public:

		int x,y,z; //declarations sa mga variables nga gamitunon

		void twovarswapping(); //void ni siya kay yamo man cyay ireturn nga value; function nga twovarswapping

		void threevarswapping(); //void ni siya kay yamo man cyay ireturn nga value; function nga threevarswapping

};



int main() {

	POLESTICO call; 

	call.twovarswapping(); 

	call.threevarswapping();

	return 0;

}



void POLESTICO::twovarswapping() //process sud sa function

{

	cout<<"TWO VARIABLES"<<endl<<"ENTER X:"; 

	cin>>x; //input value in x

	cout<<"ENTER Y:";

	cin>>y; //input value in y

	y=x+y; //mao ni pamaagi para makaswap nga dili na magamit ug laing variable

	x=y-x;

	y=y-x;

	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl; //mao na ni ang output

}





void POLESTICO::threevarswapping() //process sud ani nga function

{

	cout<<endl<<"THREE VARIABLES"<<endl<<"ENTER X:";

	cin>>x; //input value in x

	cout<<"ENTER Y:";

	cin>>y; //input value in y

	cout<<"ENTER Z:";

	cin>>z;

	x=x+y+z; //input value in z

	y=x-y-z; //mao ni pamaagi sa pagswap sa 3 values nga dili makagamit ug extra variable

	z=x-y-z;

	x=x-(y+z);

	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z; //pagprint sa output

}
