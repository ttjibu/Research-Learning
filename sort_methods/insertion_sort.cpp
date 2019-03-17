#include "../main.hpp"
using namespace std;

string Element::sort_name{"insertion_sorting "};

void Element::sort_method() {
        for(int i = 1;i < data.size();++i) {
                for(int j = i;j > 0;--j) {
                        if(data[j] < data[j-1])
                                Element::swap(data[j], data[j-1]);
                        else
                                break;
                }
        }
}
