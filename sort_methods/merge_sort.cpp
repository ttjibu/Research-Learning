#include "../main.hpp"
using namespace std;

string Element::sort_name{"merge_sort"};

void merge(vector<Element> &arr, int left_start, int right_start, int end) {
	int left_index = left_start;
	int right_index = right_start;
	//temp_array
	int tarr_index = 0;
	vector<Element> tarr(end - left_start + 1);
	//merge
	while(left_index < right_start && right_index <= end)
		tarr[tarr_index++] = arr[left_index] < arr[right_index] ? arr[left_index++] : arr[right_index++];
	while(left_index < right_start)
		tarr[tarr_index++] = arr[left_index++];
	while(right_index <= end)
		tarr[tarr_index++] = arr[right_index++];
	//copy from tarr
	tarr_index = 0;
	for(int i = left_start;i <= end;++i)
		arr[i] = tarr[tarr_index++];
}

void sort(vector<Element> &arr, int start, int end) {
	if(end - start < 2) {
		if(end - start == 1 && arr[start] > arr[end])
			Element::swap(arr[start], arr[end]);
		else
			return;
	}else{
		int mid = (start + end) / 2;
		sort(arr, start, mid);
		sort(arr, mid + 1, end);
		merge(arr, start, mid + 1, end);
	}
}

void Element::sort_method() {
	sort(data, 0, data.size()-1);
}
