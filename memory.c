#include "simple_shell.h"

/**
 * free_string_array - function
 * @v: u8 ptr ptr
*/
void	free_string_array(u8 **v)
{
	u64	x;

	if (v == 0)
		return;
	for (x = 0; v[x]; x++)
		free(v[x]);
	free(v[x]);
}
