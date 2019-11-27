#include <iostream>
using namespace std;
int tag=0;
void grade(float &p)
{
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
	if(p<33)
		tag++;
	
}

void pointer(float &p,int i)
{
	switch(i)
	{
	case 0:grade(p);
	       p=p*(4.50);
		   break;
    case 1:grade(p);
	       p=p*(3.50);
		   break;
    case 2:grade(p);
	       p=p*(1.00);
		   break;
    case 3:grade(p);
	       p=p*(3.50);
		   break;
    case 4:grade(p);
	       p=p*(1.00);
		   break;
    case 5:grade(p);
	       p=p*(3.50);
		   break;
    case 6:grade(p);
	       p=p*(1.00);
		   break;
    case 7:grade(p);
	       p=p*(4.50);
		   break;
    case 8:grade(p);
	       p=p*(1.50);
		   break;
    case 9:grade(p);
	       p=p*(1.00);
		   break;
	default:
		break;
	}
}

void submrs(float m[10])
{
    cout<<"enter marks of subject(out of 100) :\n";
    for(int i=0;i<10;i++)
	{
		switch(i)
		{
		case 0:cout<<"mathematics : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 1:cout<<"chemistry : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 2:cout<<"chemistry lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 3:cout<<"comm. skill : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
		case 4:cout<<"comm. skill : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;   
        case 5:cout<<"electronics : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 6:cout<<"electronics lab : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 7:cout<<"discrete structure : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 8:cout<<"software lab-2 : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break;
		case 9:cout<<"seminar : ";
		       cin>>m[i];
		       pointer(m[i],i);
			   break; 
		}
	}
}
int main()
{
	int i;
	float m[10],sum=0,cgpa;
	cout<<"cgpa for 1 sem : ";
	submrs(m);
	
	for(i=0;i<10;i++)
		sum=sum+m[i];
	cout<<"sum : "<<sum;
	cgpa = (sum/(250))*10;
	cout<<"\n\nyour cgpa : "<<cgpa;
	return 0;
}