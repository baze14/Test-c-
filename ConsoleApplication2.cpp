

#include <stdio.h>

typedef struct man {
	int age;
	float size;
	char* name;
	man* friends[150];
	int weight;
	int c = 0;


};

void printman(man a) {

	printf("%i", a.age);
	printf("\n\n");
	printf("%f", a.size);
	printf("\n\n");
	printf("%s", a.name);
	printf("\n\n");
	printf("%i", a.weight);


	for (int i = 0; i < a.c; i++) {
		printf("\n\n");
		printf("%s", a.friends[i]->name);
	}

}



int main() {
	man baze;
	baze.age = 17;
	baze.size = 1.81;
	baze.name = "baze";
	baze.weight = 90;
	man antuan;
	antuan.name = "antuan";
	baze.friends[0] = &antuan;
	baze.c++;
	printman(baze);



	// so it runs forever
	while (true) {}


	return 0;
}
