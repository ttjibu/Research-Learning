#include "../main.hpp"
using namespace std;

string Element::sort_name{"heap_sort"};

void heapify(vector<Element> &arr, int fa, int &heap_len) {
	int left = 2 * fa + 1;
	int right = 2 * fa + 2;
	int max = fa;
	if(left < heap_len && arr[left] > arr[max])
		max = left;
	if(right < heap_len && arr[right] > arr[max])
		max = right;
	if(max != fa) {
		Element::swap(arr[max], arr[fa]);
		heapify(arr, max, heap_len);
	}
}

void build_max_heap(vector<Element> &arr) {
	int len = arr.size();
	for(int i = arr.size() / 2 - 1; i >= 0; --i)
		heapify(arr, i, len);
}

void heap_sort(vector<Element> &arr) {
	build_max_heap(arr);
	int heap_len = arr.size();
	while(heap_len > 1) {
		Element::swap(arr[0], arr[heap_len - 1]);
		--heap_len;
		heapify(arr, 0, heap_len);
	}
}

void Element::sort_method() {
	heap_sort(data);
}
