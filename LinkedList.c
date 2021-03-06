#include <stdio.h>
#include <stdlib.h>

int main() {

	struct node {
		char data;
		struct node *link;
	};

	struct node *p;
	struct node *del;

	p = (struct node *)malloc(sizeof(struct node));
	p->data = 'A';
	p->link = (struct node *)malloc(sizeof(struct node));
	p->link->data = 'B';
	p->link->link = (struct node *)malloc(sizeof(struct node));
	p->link->link->data = 'C';
	p->link->link->link = NULL;

	/*
	while (p != NULL) {
		printf("%c\n", p->data);
		p = p->link;
	}
	*/
	printf("%c\n", p->data);
	printf("%c\n", p->link->data);
	printf("%c\n", p->link->link->data);

	del = p;

	while (p != NULL) {
		p = p->link;
		printf("%p\n", del);
		free(del);
		del = p;
	}

	return 0;

}