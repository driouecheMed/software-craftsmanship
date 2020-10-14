/*
* Problem link:
* https://open.kattis.com/problems/flowlayout
*/

#include <iostream> 
using namespace std;

int main(void){
	
	int width, height, max_width;
	int current_width, height_of_line, sum_width, sum_height;

	cin >> max_width;

	while(max_width != 0){
		// initialize
		sum_width = 0;
		sum_height = 0;
		current_width = 0;
		height_of_line = 0;

		do{
			cin >> width >> height;
			current_width += width; 
			
			if( current_width <= max_width ){
				// there is still space 
				if(current_width > sum_width){
					sum_width = current_width;
				}
				if(height_of_line < height){
					// replace height 
					sum_height = (sum_height - height_of_line) + height;
					height_of_line = height;	
				}
			}else{
				// go to new line
				current_width = width;
				height_of_line = height;
				sum_height += height;
			}
		}while(width != -1 && height != -1);
		
		cout << sum_width << " x " << sum_height << endl;
		cin >> max_width;
	}

	return 0;

}

