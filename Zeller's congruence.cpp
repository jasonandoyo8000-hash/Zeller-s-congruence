//Zeller's congruence
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int q, e,d,k, n;
	float a,b,c, j,f,g;
	
	cout<< "Zeller's Congruence (Gregorian calendar)"<<endl;
	
	cout<< "\nNote: The format in inputting the year is YY(space)YY"<<endl;
	cout<< "example year 2001, the input is (20 01)"<<endl;
	cout<<endl;
	
	cout<<"Month: ";
	cin>>n;
	
	
	
	switch(n){
		
	case 1:
		cout<<"Year: ";
		cin>>j;
		cin>>k;
		
		switch(k){
		
		case 00:
			cout<<"Day: ";
			cin>>q;
	
			f=n+12;
			g=99;
			a=floor(13*(f+1)/5);
			b=floor(g/4);
			c=floor((j-1)/4);
	
			d=(q+a+g+b+c+5*(j-1));
	
	
			e=d%7;
		
			cout<<" "<<endl;
		
		
			switch(e){
				case 0:
					cout<<"Day of the week is saturday ";
					break;
				case 1:
					cout<<"Day of the week is sunday ";
					break;
				
				case 2:
					cout<<"Day of the week is monday ";
					break;
			
				case 3:
					cout<<"Day of the week is tuesday ";
					break;
			
				case 4:
					cout<<"Day of the week is wednesday ";
					break;
				
				case 5:
					cout<<"Day of the week is thursday ";
					break;
				case 6:
					cout<<"Day of the week is friday ";
					break;
			}
		
		break;
		
		
		default:
		
			cout<<"Day: ";
			cin>>q;
	
			f=n+12;
			g=k-1;
			a=floor(13*(f+1)/5);
			b=floor(g/4);
			c=floor(j/4);
	
			d=(q+a+g+b+c+5*j);
	
	
			e=d%7;
			
			cout<<" "<<endl;
		
		
			switch(e){
				case 0:
					cout<<"Day of the week is saturday ";
					break;
				case 1:
					cout<<"Day of the week is sunday ";
					break;
				
				case 2:
					cout<<"Day of the week is monday ";
					break;
			
				case 3:
					cout<<"Day of the week is tuesday ";
					break;
			
				case 4:
					cout<<"Day of the week is wednesday ";
					break;
				
				case 5:
					cout<<"Day of the week is thursday ";
					break;
				case 6:
					cout<<"Day of the week is friday ";
					break;
		}

		break;
	}
	break;
	case 2:	
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		switch(k){
		
		case 00:
			cout<<"Day: ";
			cin>>q;
	
			f=n+12;
			g=99;
			a=floor(13*(f+1)/5);
			b=floor(g/4);
			c=floor((j-1)/4);
	
			d=(q+a+g+b+c+5*(j-1));
	
	
			e=d%7;
		
			cout<<" "<<endl;
		
		
			switch(e){
				case 0:
					cout<<"Day of the week is saturday ";
					break;
				case 1:
					cout<<"Day of the week is sunday ";
					break;
				
				case 2:
					cout<<"Day of the week is monday ";
					break;
			
				case 3:
					cout<<"Day of the week is tuesday ";
					break;
			
				case 4:
					cout<<"Day of the week is wednesday ";
					break;
				
				case 5:
					cout<<"Day of the week is thursday ";
					break;
				case 6:
					cout<<"Day of the week is friday ";
					break;
			}
		
		break;
		
		
		default:
		
			cout<<"Day: ";
			cin>>q;
	
			f=n+12;
			g=k-1;
			a=floor(13*(f+1)/5);
			b=floor(g/4);
			c=floor(j/4);
	
			d=(q+a+g+b+c+5*j);
	
	
			e=d%7;
			
			cout<<" "<<endl;
		
		
			switch(e){
				case 0:
					cout<<"Day of the week is saturday ";
					break;
				case 1:
					cout<<"Day of the week is sunday ";
					break;
				
				case 2:
					cout<<"Day of the week is monday ";
					break;
			
				case 3:
					cout<<"Day of the week is tuesday ";
					break;
			
				case 4:
					cout<<"Day of the week is wednesday ";
					break;
				
				case 5:
					cout<<"Day of the week is thursday ";
					break;
				case 6:
					cout<<"Day of the week is friday ";
					break;
		}

		break;
	}
		break;
	
	case 3:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 4:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 5:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
	
	case 6:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 7:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 8:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 9:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 10:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 11:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	case 12:
		
		cout<<"Year: ";
		cin>>j;
		cin>>k;
	
		cout<<"Day: ";
		cin>>q;
	
		a=floor(13*(n+1)/5);
		b=floor(k/4);
		c=floor(j/4);
	
		d=(q+a+k+b+c+5*j);
	
	
		e=d%7;
	
		cout<<" "<<endl;
		
		switch(e){
			case 0:
				cout<<"Day of the week is saturday ";
				break;
			case 1:
				cout<<"Day of the week is sunday ";
				break;
				
			case 2:
				cout<<"Day of the week is monday ";
				break;
			
			case 3:
				cout<<"Day of the week is tuesday ";
				break;
			
			case 4:
				cout<<"Day of the week is wednesday ";
				break;
				
			case 5:
				cout<<"Day of the week is thursday ";
				break;
			case 6:
				cout<<"Day of the week is friday ";
				break;
		}
		
		break;
		
	default:
		cout<<"\nERROR";
	}
	
	
	
}




