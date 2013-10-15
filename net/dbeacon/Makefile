# Created by: Antonio Querubin <tony@lava.net>
# $FreeBSD: net/dbeacon/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	dbeacon
PORTVERSION=	0.3.9.1
CATEGORIES=	net
MASTER_SITES=	http://fivebits.net/files/dbeacon/

MAINTAINER=	tony@lava.net
COMMENT=	Distributed multicast beacon server

PLIST_FILES=	bin/dbeacon

USE_GMAKE=	yes
MAN1=		dbeacon.1

USE_RC_SUBR=	dbeacon

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/docs/dbeacon.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
