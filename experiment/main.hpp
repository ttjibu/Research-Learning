#ifndef __main_hpp__
#define __main_hpp__
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

const std::string data_file{"../log/data"};//The generated data of the experiment
const std::string log_dir{"../log/"};//Where to put the log info
const std::string log_file_suffix{"log.md"};

class Element{
	public:
		Element(const char& another);
		Element(const Element& another);
		Element();
		char get_value() const;
		bool operator<=(const Element& another) const;
		bool operator<(const Element& another) const;
		bool operator>=(const Element& another) const;
		bool operator>(const Element& another) const;
		char operator=(Element& another);
		char operator=(const char& another);
		static void clear();//To clear the data and initialize it.
		static void swap(Element& first,Element& second);//To swap two Elements.
		static bool is_sorted();
		static bool input();
		static void output();
		static void sort_method();

		static int times;
		static long long cmp_count;
		static long long set_count;
		static std::vector<Element> data;
		static char data_length;
		static std::string sort_name;
		static std::ifstream ifs;
		
	private:
		char value;
};//The class of the numbers to replace typical datatype.

#endif
