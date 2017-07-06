#pragma once

#include <stdio.h>
 
typedef struct location {
	float x;
	float y;
};

typedef struct job {
	int salary;
	location pos;
	char* description;
};

typedef struct man {
	int age;
	float size;
	char* name;
	man* friends[150];
	int weight;
	int c = 0;
	job myjob;
	location pos;
};

void printman(man a) {

	printf("name : %s", a.name);
	printf("\n\n");
	printf("age : %i", a.age);
	printf("\n\n");
	printf("height : %f", a.size);
	printf("\n\n");
	printf("weight : %i", a.weight);
	printf("\n\n");
	printf("position x : %f", a.pos.x);
	printf("\n\n");
	printf("position y : %f", a.pos.y);
	printf("\n\n");
	printf("job description : %s", a.myjob.description);
	printf("\n\n");
	printf("salary : %i", a.myjob.salary);
	printf("\n\n");
	printf("job position x : %f", a.myjob.pos.x);
	printf("\n\n");
	printf("job position y : %f", a.myjob.pos.y);
	printf("\n\n");
	printf("-------friends------");

	for (int i = 0; i < a.c; i++) {
		printf("\n\n");
		printf("%s", a.friends[i]->name);
		printf("\n\n");
	}

}

