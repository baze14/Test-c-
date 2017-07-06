#include "Header.h" 
#include <stdio.h>




int main() {
	man baze;
	baze.age = 17;
	baze.size = 1.81;
	baze.name = "baze";
	baze.weight = 90;
	baze.pos.x = 100;
	baze.pos.y = 33;
	baze.myjob.description = "Software Developer";
	baze.myjob.salary = 0;
	baze.myjob.pos.x = 200;
	baze.myjob.pos.y = 300;
	man antuan;
	antuan.name = "antuan";
	baze.friends[0] = &antuan;
	baze.c++;
	printman(baze);
	



	// so it runs forever
	while (true) {}


	return 0;
}
