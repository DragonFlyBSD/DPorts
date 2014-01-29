# Created by: mwm@mired.org
# $FreeBSD: x11-wm/ratmenu/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ratmenu
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.mired.org/downloads/

MAINTAINER=	mwm@mired.org
COMMENT=	A simple menu patterened for use with ratpoison

USE_XORG=	x11
ALL_TARGET=	ratmenu
MAN1=		ratmenu.1
PLIST_FILES=	bin/ratmenu

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ratmenu ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ratmenu.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
