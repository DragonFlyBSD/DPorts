# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: devel/librelp/Makefile 326992 2013-09-11 16:49:09Z wg $

PORTNAME=	librelp
PORTVERSION=	1.2.0
CATEGORIES=	devel
MASTER_SITES=	http://download.rsyslog.com/librelp/

MAINTAINER=	brd@FreeBSD.org
COMMENT=	Reliable event logging protocol library

LIB_DEPENDS=	libgnutls.so:${PORTSDIR}/security/gnutls

USES=		pathfix pkgconfig
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

PLIST_FILES=	include/${PORTNAME}.h \
		lib/${PORTNAME}.a lib/${PORTNAME}.la \
		lib/${PORTNAME}.so lib/${PORTNAME}.so.0 \
		libdata/pkgconfig/relp.pc

PORT_VERBS=	relp

post-patch:
	@${REINPLACE_CMD} -e '/CFLAGS/s| -g||g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
