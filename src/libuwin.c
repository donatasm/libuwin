#include <stdio.h>
#include "../lib/libuv/include/uv.h"

int main() {
	uv_loop_t* loop = uv_loop_new();
	uv_run(loop, UV_RUN_DEFAULT);
	uv_loop_delete(loop);
	return 0;
}
