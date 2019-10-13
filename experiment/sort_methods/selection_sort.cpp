#include "../main.hpp"
using namespace std;

string Element::sort_name{"Selection Sort"};

void Element::sort_method() {
	Element min(0);
	int minIndex;
	for(vector<Element>::size_type i = 0;i < data.size() -1;++i) {
		min = data[i].value;
		minIndex = i;
		for(vector<Element>::size_type j = i;j < data.size();++j) {
			if(data[j] < min) {
				min = data[j].value;
				minIndex = j;
			}
		}
		set_count++;
		swap(data[i], data[minIndex]);
	}
}
