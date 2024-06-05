/*
 * 1340 - I Can Guess the Data Structure! 
 * Author: Otavio
 * Date: 02/06/2024
 */
#include <stdio.h>

#define MAX_LEN 1000

struct data_structure
{
	int data[MAX_LEN];
	int len;
	int is;
};

void
init_all();

void
insert_all(const int);

void
remove_all(const int);

int
max_prio();


struct data_structure stack = {.len=0, .is=1};
struct data_structure queue = {.len=0, .is=1};
struct data_structure prio_queue = {.len=0, .is=1};


int
main()
{
	int N;
	int t,x;
	while(scanf("%d\n", &N) != EOF)
	{
		init_all();
		while(N--)
		{
			scanf("%d %d\n", &t, &x);
			if(t==1)
				insert_all(x);
			else
				remove_all(x);
		}
	
		if(stack.is && !queue.is && !prio_queue.is)
			printf("stack\n");
		else if(queue.is && !prio_queue.is && !stack.is)
			printf("queue\n");
		else if(prio_queue.is && !stack.is && !queue.is)
			printf("priority queue\n");
		else if(!prio_queue.is && !stack.is && !queue.is)
			printf("impossible\n");
		else
			printf("not sure\n");
	}

	return 0;
}


void
init_all()
{
	stack.len = 0;
	stack.is = 1;

	queue.len = 0;
	queue.is = 1;

	prio_queue.len = 0;
	prio_queue.is = 1;
}

void
insert_all(const int x)
{
	stack.data[stack.len] = x;
	stack.len++;
	queue.data[queue.len] = x;
	queue.len++;
	prio_queue.data[prio_queue.len] = x;
	prio_queue.len++;
}

void
remove_all(const int x)
{
	stack.is = stack.is && stack.data[stack.len-1] == x;
	queue.is = queue.is && queue.data[0] == x;
	prio_queue.is = prio_queue.is && prio_queue.data[max_prio()] == x;

	if(stack.is)
		stack.len--;
	if(queue.is)
	{
		for(int i=1; i<queue.len; i++)
			queue.data[i-1] = queue.data[i];
		queue.len--;
	}
	if(prio_queue.is)
	{
		for(int i=max_prio(); i<prio_queue.len-1; i++)
			prio_queue.data[i] = prio_queue.data[i+1];
		prio_queue.len--;
	}
}

int
max_prio()
{
	if(prio_queue.len==1)
		return 0;

	int imax=0, dmax=prio_queue.data[0];
	for(int i=1; i<prio_queue.len; i++)
	{
		if(prio_queue.data[i] > dmax)
		{
			imax = i;
			dmax = prio_queue.data[imax];
		}
	}
	return imax;
}
