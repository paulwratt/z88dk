/*
 *      Part of the library for fcntl
 *
 *      size_t read(int fd,void *ptr, size_t len)
 *
 * -----
 * $Id: read.c $
 */


#include <sys/types.h>
#include <fcntl.h>


ssize_t read(int fd, void *ptr, size_t len)
{
	int	i;

	for ( i = 0; i < len ; i++ ) {
		if ( ( ptr[i] = readbyte(fd) ) == -1 ) {
			return i;
		}
	}

	return i;
}
