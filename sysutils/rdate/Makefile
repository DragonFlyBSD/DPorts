# Created by: cracauer@cons.org "Martin Cracauer"
#
# $FreeBSD: ports/sysutils/rdate/Makefile,v 1.17 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	rdate
PORTVERSION=	1.3
CATEGORIES=	sysutils
MASTER_SITES=	http://www.cons.org/freebsd-distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sets the clock of the local host to the time of another host

MAN8=		rdate.8
PLIST_FILES=	sbin/rdate

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rdate ${PREFIX}/sbin/.
	${INSTALL_MAN} ${WRKSRC}/rdate.8 ${PREFIX}/man/man8/.

.include <bsd.port.mk>
