# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/bmp-crossfade/Makefile 336166 2013-12-11 14:35:36Z bapt $

APP=		bmp
LIB_DEPENDS=	libbeep.so:${PORTSDIR}/multimedia/beep-media-player

NO_STAGE=	yes
MASTERDIR=	${.CURDIR}/../xmms-crossfade

PORTSCOUT=	limit:^0\.3\.12

.include "${MASTERDIR}/Makefile"
