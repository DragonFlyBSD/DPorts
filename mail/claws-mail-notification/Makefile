# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: mail/claws-mail-notification/Makefile 325602 2013-08-29 15:01:46Z pawel $

PORTNAME=	notification
PORTREVISION=	1

COMMENT=	New mail notification plugin for Claws Mail

LIB_DEPENDS=	libcanberra-gtk.so:${PORTSDIR}/audio/libcanberra \
		libnotify.so:${PORTSDIR}/devel/libnotify

CLAWS_PLUGINS_BUILD=	notification

.include "../claws-mail/Makefile.claws"
.include <bsd.port.mk>
