# New ports collection makefile for:	rftp
# Date created:			13 Dec, 1997
# Whom:				kline
#
# $FreeBSD: ports/mail/rftp/Makefile,v 1.13 2012/11/17 05:59:13 svnexp Exp $
#

PORTNAME=	rftp
PORTVERSION=	1.2
CATEGORIES=	mail
MASTER_SITES=	http://muuz.deadbbs.com/FreeBSD/rftp/

MAINTAINER=	kline@thought.org
COMMENT=	Automatically reconstruct ftpmail- or bitftp-retrieved files

MAN1=		rftp.1 uucat.1

#	rftp's `make install' stinks, do it properly here
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rftp ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/uucat ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/rftp.1 ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/uucat.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
