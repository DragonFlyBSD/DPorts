# Created by: Simon Barner <barner@gmx.de>
# $FreeBSD: net/nifmon/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nifmon
PORTVERSION=	1.4
CATEGORIES=	net
MASTER_SITES=	http://www.freebsd-support.de/misc/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A curses based network interface monitoring tool

MAN8=		nifmon.8
PLIST_FILES=	bin/nifmon

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nifmon ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nifmon.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
