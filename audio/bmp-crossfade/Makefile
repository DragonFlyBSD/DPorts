# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/bmp-crossfade/Makefile 327706 2013-09-20 14:36:35Z bapt $

APP=		bmp
LIB_DEPENDS=	beep.2:${PORTSDIR}/multimedia/beep-media-player

NO_STAGE=	yes
MASTERDIR=	${.CURDIR}/../xmms-crossfade

PORTSCOUT=	limit:^0\.3\.12

.include "${MASTERDIR}/Makefile"
