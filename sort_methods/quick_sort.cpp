#include "../main.hpp"
using namespace std;

string Element::sort_name{"quick_Sort"};
 
int Paritition(vector<Element> &vec, int low, int high) {
   Element pivot = vec[low];
   while (low < high) {
     while (low < high && vec[high] >= pivot) {
       --high;
     }
     vec[low] = vec[high];
     while (low < high && vec[low] <= pivot) {
       ++low;
     }
     vec[high] = vec[low];
   }
   vec[low] = pivot;
   return low;
}

 void quickSort(vector<Element> &vec, int low, int high)
 {
   if (low < high) {
     int pivot = Paritition(vec, low, high);
     quickSort(vec, low, pivot - 1);
     quickSort(vec, pivot + 1, high);
   }
 }

void Element::sort_method() {
	quickSort(data, 0, data.size() - 1);	
}

