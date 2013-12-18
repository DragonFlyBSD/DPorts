# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: mail/claws-mail-notification/Makefile 336489 2013-12-14 22:02:10Z pawel $

PORTNAME=	notification
PORTREVISION=	0

COMMENT=	New mail notification plugin for Claws Mail

LIB_DEPENDS=	libcanberra-gtk.so:${PORTSDIR}/audio/libcanberra \
		libnotify.so:${PORTSDIR}/devel/libnotify

CLAWS_PLUGINS_BUILD=	notification

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
