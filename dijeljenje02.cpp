#include "std_lib_facilities.h"
#include <cfloat>
int main()
{

	int a, c, d, e, dp;
	int b, l=0, m=1;
//	int c=trunc(log10(a)); //broj znamenaka - 1
//	cout<<c<<'\n';
	
	cout<<"Unesi djeljenika i djelitelja i broj decimalnih mjesta za ispis!\n";
	cin>>a>>b>>dp;
	c=a;

//izbacuje prvih 99 znamenaka iza decimalne točke
	while (l<dp+1){
		d=c/b;
		cout<<d;
		if ( c==a && m==1 ) {
			cout<<'.';
			m=0;
		}
		e=c-d*b;
		c=e*10;
		l++;
	}
	
//	while ( c>=0 ){
//		b=a/pow(10, c);
//		cout<<b;
//		a=a-b*pow(10, c);
//		cout<<a<<'\n'<<'\n';
//	int b=3;
//	int c;
	
//	cout.precision(LDBL_MANT_DIG);
//	cout<<LDBL_MANT_DIG<<'\n';
/*	while ( 1 ){
//		cout.precision(5*i);
//		cout<<an<<" "<<bn<<" "<<tn<<" "<<pn<<'\n';
		c=a-(a/10);
		cout<<c;
		
		
	}*/
	
	return 0;
}



