#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void * isUnique(void *arg)
{
#ifdef DEBUG
	printf("%s Begin\n", __func__);
#endif

	MUnique *mUn = (MUnique *)(arg);
	flag = 1;
	if(mUn->size == 0)
		return (void *)(&flag);

	//printf("mUn->size %d\n",mUn->size);
	for(int i = 0; i <  mUn->size;i++)
	{
		if(mUn->ch == *(mUn->ma + i))
		{
			//printf("mUn->ch: %c\n",mUn->ch);
			//printf(" *(mUn->ma + i) : %c\n",*(mUn->ma +i));
			flag = 0;
			return (void *)(&flag);

		}

	}
	


#ifdef DEBUG
	printf("%s End\n", __func__);
#endif

	flag = 1;
	return (void *)(&flag);

}
