/*	$NetBSD: $	*/

#ifndef	_NET_LAGG_IF_LAGGVAR_H_
#define _NET_LAGG_IF_LAGGVAR_H_

void		lagg_ifdetach(struct ifnet *);
void		lagg_linkstate_changed(struct ifnet *);

extern struct mbuf *
		(*lagg_input_ethernet_p)(struct ifnet *,
		    struct mbuf *);

#endif
