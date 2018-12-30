#pragma once


typedef struct Stack {
	int array[100];
	int top;
}	Stack;

// ≥ı ºªØ
void StackInit(Stack *stack) {
	stack->top = 0;
}

// —π’ª£®Œ≤≤Â£©
void StackPush(Stack *stack, int value) {
	stack->array[stack->top] = value;
	stack->top++;
}

// ≥ˆ’ª°¢µØ≥ˆ£®Œ≤…æ£©
void StackPop(Stack *stack) {
	stack->top--;
}

// ∑µªÿ’ª∂•‘™Àÿ
int StackTop(const Stack *stack) {
	return stack->array[stack->top - 1];
}

// ≈–∂œ «∑ÒŒ™ø’
int StackEmpty(const Stack *stack) {
	return stack->top == 0 ? 1 : 0;
}

// ªÒ»° size
int StackSize(const Stack *stack) {
	return stack->top;
}


// 1. ¿®∫≈∆•≈‰
bool isValid(char* s) {
	Stack	stack;
	StackInit(&stack);

	while (*s != '\0') {
		switch (*s) {
		case '{':
		case '[':
		case '(':
			StackPush(&stack, (int)*s);
			break;
		case '}':
		case ']':
		case ')': {
					  if (StackEmpty(&stack)) {
						  return false;
					  }

					  char left = (char)StackTop(&stack);
					  StackPop(&stack);
					  if (!(left == '(' && *s == ')'
						  || left == '[' && *s == ']'
						  || left == '{' && *s == '}')) {
						  return false;
					  }
					  break;
		}
		default:
			break;
		}

		s++;
	}

	if (!StackEmpty(&stack)) {
		return false;
	}

	return true;
}