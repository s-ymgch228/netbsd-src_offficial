/*	$NetBSD: msg_213.c,v 1.3 2022/06/16 21:24:41 rillig Exp $	*/
# 3 "msg_213.c"

// Test for message: void function %s cannot return value [213]

/* expect+2: warning: argument 'x' unused in function 'example' [231] */
void
example(int x)
{
	/* expect+1: error: void function example cannot return value [213] */
	return x;
}
