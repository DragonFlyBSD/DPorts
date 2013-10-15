# Created by: cracauer@cons.org "Martin Cracauer"
# $FreeBSD: sysutils/rdate/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	rdate
PORTVERSION=	1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.cons.org/freebsd-distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sets the clock of the local host to the time of another host

MAN8=		rdate.8
PLIST_FILES=	sbin/rdate

NO_STAGE=	yes
post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rdate ${PREFIX}/sbin/.
	${INSTALL_MAN} ${WRKSRC}/rdate.8 ${PREFIX}/man/man8/.

.include <bsd.port.mk>
