/*
队列(Queue)：FIFO(first-int,first-out)

队列有队头(head)和队尾(tail)
*/

void En_Queue(int Q[], int x)
{
	Q[Q.tail] = x;
	if(Q.tail == Q.length)
		Q.tail = 1;
	else
		Q.tail++;
}

void De_Queue(int Q[])
{
	x = Q[Q.head];
	if(Q.head == Q.length)
		Q.head = 1;
	else
		Q.head++
	return x;
}
