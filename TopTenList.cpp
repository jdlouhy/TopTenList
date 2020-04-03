//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
	_list.resize(10); 
}

void TopTenList::set_at(int index, Hyperlink link)
{
	_list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
	return _list[index];  
}


void TopTenList::display_forward(){

	for (int i=0; i < 10; i++){

		Hyperlink link = get(i);
		cout << " Number : " << i+1 << " Language : " << link.text << " URL: " << link.url << endl;;

	}

}
void TopTenList::display_backward(){
	for (int i=9; i >= 0; i++){

		Hyperlink link = get(i);
		cout << " Number : " << i+1 << " Language : " << link.text << " URL: " << link.url << endl;;

	}



}


