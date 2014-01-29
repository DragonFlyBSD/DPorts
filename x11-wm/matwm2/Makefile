# Created by: Mattis Michel <sic_zer0@hotmail.com>
# $FreeBSD: x11-wm/matwm2/Makefile 340775 2014-01-23 03:06:15Z vanilla $

PORTNAME=	matwm2
DISTVERSION=	0.1.2pre3
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.squidjam.com/matwm/pub/

MAINTAINER=	sic_zer0@hotmail.com
COMMENT=	Minimalistic, yet functional window manager for X11

LICENSE=	MIT

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--cc=${CC} --prefix=${PREFIX} --mandir=${MANPREFIX}/man
USE_XORG=	x11 xext xinerama xft

PLIST_FILES=	bin/matwm2 man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
