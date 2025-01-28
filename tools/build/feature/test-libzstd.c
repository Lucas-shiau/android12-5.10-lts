// SPDX-License-Identifier: GPL-2.0
#include <zstd.h>

int main(void)
{
	zstd_cstream	*cstream;

	cstream = ZSTD_createCStream();
	ZSTD_freeCStream(cstream);

	return 0;
}
