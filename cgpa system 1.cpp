#include <iostream>
using namespace std;
int tag=0;
void grade(float &p)
{
	if(p<33)
		p=4;
	if(p<=100 && p>90 )
		p=10;
	if(p<=90  && p>80 )
		p=9;
	if(p<=80  && p>70 )
		p=8;
	if(p<=70  && p>60 )
		p=7;
	if(p<=60  && p>50 )
		p=6;
	if(p<=50  && p>40 )
		p=5;
	if(p<=40  && p>32 )
		p=4;	
}

void pointer(float &p,int i)
{
	switch(i)
	{
	case 0:grade(p);
	       p=p*(3.50);
		   break;
    case 1:grade(p);
	       p=p*(1);
		   break;
    case 2:grade(p);
	       p=p*(3.50);
		   break;
    case 3:grade(p);
	       p=p*(1);
		   break;
    case 4:grade(p);
	       p=p*(3.50);
		   break;
    case 5:grade(p);
	       p=p*(1);
		   break;
    case 6:grade(p);
	       p=p*(3.50);
		   break;
    case 7:grade(p);
	       p=p*(1);
		   break;
    case 8:grade(p);
	       p=p*(3.50);
		   break;
    case 9:grade(p);
	       p=p*(1);
		   break;
    case 10:grade(p);
	       p=p*(1.50);
		   break;
    case 11:grade(p);
	       p=p*(1);
		   break;
	default:
		break;
	}
}

void submrs(float m[12])
{
    cout<<"enter marks of subject(out of 100) :\n";
    for(int i=0;i<12;i++)
	{
		switch(i)
		{
		case 0:cout<<"physics : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 1:cout<<"physics lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 2:cout<<"mechanics : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 3:cout<<"mechanics lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 4:cout<<"basic electrical : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
        case 5:cout<<"basic electrical lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 6:cout<<"basic mechanical : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 7:cout<<"basic mechanical lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 8:cout<<"fundamental of computer : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 9:cout<<"fundamental of computer lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break; 
		case 10:cout<<"software lab - 1 : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;  
        case 11:cout<<"seminar : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;          
		}
	}
}
int main()
{
	int i;
	float m[12],sum=0,cgpa;
	cout<<"cgpa for 1 sem : ";
	submrs(m);
	if(tag==0)
	{
	   for(i=0;i<12;i++)
		  sum=sum+m[i];
	   cout<<"sum : "<<sum;
	   cgpa = (sum/(250))*10;
	   cout<<"\n\nyour cgpa : "<<cgpa;
	}
	if(tag>=1)
    {
		cout<<"all subjects are not clear . ";
	}
	return 0;
}