# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: mail/claws-mail-notification/Makefile 321334 2013-06-19 21:40:24Z pawel $

PORTNAME=	notification
PORTREVISION=	1

COMMENT=	New mail notification plugin for Claws Mail

LIB_DEPENDS=	canberra-gtk:${PORTSDIR}/audio/libcanberra \
		notify:${PORTSDIR}/devel/libnotify

CLAWS_PLUGINS_BUILD=	notification

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
