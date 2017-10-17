## LibFT

This is my custom C library. It is the first project in the 42 curriculum and one of the most important, because we aren't allowed to use any other libraries in most of our projects. I learned a lot about C, the standard library, and programming in general through this project.


#### Tools
* `C`, `C` macros, stdlib, `clang`, `lldb`, `make`, shell scripting.
* Tested on FreeBSD, Linux, and MacOS.

#### Project requirements
Create an implementation of the most commonly used C standard library functions, as well as any other useful custom functions.
* Allowed functions: `write`, `malloc`, and `free`.
* The project is rigorously graded by other students and ‘moulinette’, the meatgrinder.

#### An example

One of my favorite functions to write was `strlcat`. I like how my implementation ended up so declarative (albeit less performant) compared to the original OpenBSD implementation. This makes it so readable that it is even easier to understand than the man page. 

###### My `strlcat` implementation
```c
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + (size >= dlen ? dlen : size));
	ft_strncat(dst, src, size - dlen - 1);
	return (dlen + slen);
}
```

###### The OpenBSD `strlcat` implementation
```c
size_t strlcat(char *dst, const char *src, size_t dsize)
{
	const char *odst = dst;
	const char *osrc = src;
	size_t n = dsize;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dsize - dlen;

	if (n-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';

	return(dlen + (src - osrc));	/* count does not include NUL */
}
```
