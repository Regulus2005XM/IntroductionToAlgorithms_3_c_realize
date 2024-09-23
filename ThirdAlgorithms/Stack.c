/*
栈(Stack)：LIFO(last-in,first-out)

栈上的Insert操作称为压入(Push)，无元素参数的Delete操作称为弹出(Pop)

S[1]是栈底元素，S[S.top]是栈顶元素

对空栈弹出称栈下溢(underflow)，S.top超过存储空间n称为栈上溢(overflow)
*/

bool Is_Stack_Empty(int S[])
{
	if(S.top == 0)
		return true;
	return false;
}

void Push(int S[], int x)
{
	S.top++:
	S[S.top] = x;
}

void Pop(int S[])
{
	if(IS_Stack_Empty(S[]))
		error("underflow");
	else
		S.top--;
		return S[S.top+1];
}
