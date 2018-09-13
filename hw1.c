#include <stdio.h>
#include <stdlib.h>

int helper_problem5(int num){
	int place=11;
	for (place; place<=20; place++){
		if (num%place != 0)
			return place;
	} return 0;
}

int problem5(){
	int num=2520;
	int var=1;
	while (var!=0){
		num*=var;
		var=helper_problem5(num);
	}
	printf("Smallest Multiple: %d\n", num);
}

int problem6(){
	int i;
	int square = 1; 
	int sum = 1; 
	int result = 1;
		for (i=1; i<=100;i++){
			square+= i*i;
			sum += i;
		} 
		result= square - (sum*sum);
		printf("Difference :%d\n", result);
	}

int main(){
	problem6();
	problem5();
	}
