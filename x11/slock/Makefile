# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: x11/slock/Makefile 329977 2013-10-10 08:42:51Z gahr $

PORTNAME=	slock
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	http://dl.suckless.org/tools/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Simple X screen locker

MAKE_ARGS=	PREFIX="${PREFIX}" X11LIB="${LOCALBASE}/lib" \
		X11INC="${LOCALBASE}/include" CC="${CC}" \
		MANPREFIX="${MANPREFIX}/man"
PLIST_FILES=	bin/slock

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_XORG=	x11 xt xproto xext

post-patch:
	@${REINPLACE_CMD} -e 's|-I/usr/include||;s|-L/usr/lib||;s|= -Os|+=|'\
		-e 's|-DHAVE_SHADOW_H|-DHAVE_PAM|' -e '/^LDFLAGS/s|$$| -lpam|' \
		${WRKSRC}/config.mk

.include <bsd.port.mk>
