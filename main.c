#include "score.h"


int main(void){
	int scores[MAX], marks[MAX];
	int statistics[6]={0};		//={0} initializer list. if one values is given all
								// other will be given 0
								//can give value for more values ={0,0,0,...}

	input_scores(scores);		//pointers used here
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);

	return 0;
}

