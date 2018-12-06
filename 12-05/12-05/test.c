#define _CRT_SECURE_NO_WARNINGS
//Ä£ÄâÊµÏÖstrlen
int  strlen(const char * str	)
{
	const char *eos = str;

	while (*eos++);

	return(eos - str - 1);
}
//
