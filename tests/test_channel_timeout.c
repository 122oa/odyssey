
/*
 * machinarium.
 *
 * Cooperative multitasking engine.
*/

#include <machinarium.h>
#include <machinarium_test.h>

static void
test_coroutine(void *arg)
{
	machine_channel_t channel;
	channel = machine_channel_create();

	machine_msg_t msg;
	msg = machine_channel_read(channel, 100);
	test(msg == NULL);

	test(channel != NULL);
	machine_channel_free(channel);
}

void
test_channel_timeout(void)
{
	machinarium_init();

	int id;
	id = machine_create("test", test_coroutine, NULL);
	test(id != -1);

	int rc;
	rc = machine_wait(id);
	test(rc != -1);

	machinarium_free();
}
