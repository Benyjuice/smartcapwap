#include "config.h"
#include <linux/module.h>
#include <linux/kernel.h>
#include "netlinkapp.h"

/* */
static int __init smartcapwap_wtp_init(void) {
	int ret;

	TRACEKMOD("### smartcapwap_wtp_init\n");

	/* Initialize netlink */
	ret = sc_netlink_init();
	if (ret) {
		return ret;
	}

	return ret;
}
module_init(smartcapwap_wtp_init);

/* */
static void __exit smartcapwap_wtp_exit(void) {
	TRACEKMOD("### smartcapwap_wtp_exit\n");

	sc_netlink_exit();
}
module_exit(smartcapwap_wtp_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Massimo Vellucci <vemax78@gmail.com>");
MODULE_DESCRIPTION("SmartCAPWAP WTP Data Channel Module");
