#include "../main.hpp"
#include<iostream>
#include<vector>
using namespace std;
string Element::sort_name{"Quick Sort"};
 
void quicksort(vector<Element>& vec,int s,int t)
{
	int i=s,j=t;
	if(s<t)
	{
		Element tem=vec[s];
		while(i!=j)
		{
			while(j>i&&vec[j]>tem)
				j--;
			if(j>i)
				vec[i]=vec[j];
			while(i<j&&vec[i]<tem)
				i++;
			if(i<j)
				vec[j]=vec[i];
		}
		vec[i]=tem;
			quicksort(vec,s,i-1);
			quicksort(vec,i+1,t);
	}
}
void Element::sort_method()
{	
	quicksort(data,0,data.size()-1);
}
