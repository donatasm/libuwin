all:
	gcc src/libuwin.c -o libuwin.a lib/libuv/libuv.a -framework CoreFoundation -framework CoreServices
