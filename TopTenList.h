//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include<iostream>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"
using std::string;
using std::vector;
using std::cout;
using std::endl;
class TopTenList : public IDirectionable
{
       //pure virtual this functions display_forward and display_backward MUST be implemented.
	private:
		vector<Hyperlink> _list;
	public:
		TopTenList();
		void display_forward();
		void display_backward();

		void set_at(int index, Hyperlink link);
		Hyperlink get(int index);
};

#endif
