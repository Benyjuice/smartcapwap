#ifndef __WTP_NLSMARTCAPWAP_HEADER__
#define __WTP_NLSMARTCAPWAP_HEADER__

/* */
#define NLSMARTCAPWAP_GENL_NAME					"smartcapwap_wtp"

/* */
#define NLSMARTCAPWAP_FLAGS_TUNNEL_8023			0x00000001

/* */
enum nlsmartcapwap_attrs {
	NLSMARTCAPWAP_ATTR_UNSPEC,

	NLSMARTCAPWAP_ATTR_IFINDEX,
	NLSMARTCAPWAP_ATTR_RADIOID,
	NLSMARTCAPWAP_ATTR_WLANID,
	NLSMARTCAPWAP_ATTR_BINDING,

	NLSMARTCAPWAP_ATTR_FLAGS,

	NLSMARTCAPWAP_ATTR_MGMT_SUBTYPE_MASK,
	NLSMARTCAPWAP_ATTR_CTRL_SUBTYPE_MASK,
	NLSMARTCAPWAP_ATTR_DATA_SUBTYPE_MASK,

	NLSMARTCAPWAP_ATTR_ADDRESS,
	NLSMARTCAPWAP_ATTR_MTU,

	NLSMARTCAPWAP_ATTR_SESSION_ID,

	NLSMARTCAPWAP_ATTR_DTLS,

	NLSMARTCAPWAP_ATTR_DATA_FRAME,
	NLSMARTCAPWAP_ATTR_RSSI,
	NLSMARTCAPWAP_ATTR_SNR,
	NLSMARTCAPWAP_ATTR_RATE,

	/* Last attribute */
	__NLSMARTCAPWAP_ATTR_AFTER_LAST,
	NLSMARTCAPWAP_ATTR_MAX = __NLSMARTCAPWAP_ATTR_AFTER_LAST - 1
};

/* */
enum nlsmartcapwap_commands {
	NLSMARTCAPWAP_CMD_UNSPEC,

	NLSMARTCAPWAP_CMD_LINK,

	NLSMARTCAPWAP_CMD_BIND,
	NLSMARTCAPWAP_CMD_CONNECT,
	NLSMARTCAPWAP_CMD_RESET,

	NLSMARTCAPWAP_CMD_SEND_KEEPALIVE,
	NLSMARTCAPWAP_CMD_RECV_KEEPALIVE,

	NLSMARTCAPWAP_CMD_SEND_DATA,
	NLSMARTCAPWAP_CMD_RECV_DATA,

	NLSMARTCAPWAP_CMD_JOIN_MAC80211_DEVICE,
	NLSMARTCAPWAP_CMD_LEAVE_MAC80211_DEVICE,

	/* Last command */
	__NLSMARTCAPWAP_CMD_AFTER_LAST,
	NLSMARTCAPWAP_CMD_MAX = __NLSMARTCAPWAP_CMD_AFTER_LAST - 1
};

#endif /* __WTP_NLSMARTCAPWAP_HEADER__ */
