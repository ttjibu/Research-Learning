#include "../main.hpp"
using namespace std;

string Element::sort_name{"bubble_sort"};

void Element::sort_method(){
	for(vector<Element>::size_type i = 0;i < data.size();++i) {
		for(vector<Element>::size_type j = 0;j < data.size() -i -1;++j) {
			if(data[j] > data[j+1])
				Element::swap(data[j], data[j+1]);
		}
	}
}
