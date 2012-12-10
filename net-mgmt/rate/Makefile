# New ports collection makefile for:   rate
# Date created:        Thu Aug 21 18:12:35 GMT 2003
# Whom:                mich@FreeBSD.org
#
# $FreeBSD: ports/net-mgmt/rate/Makefile,v 1.6 2012/11/17 06:00:37 svnexp Exp $
#

PORTNAME=	rate
PORTVERSION=	0.9
CATEGORIES=	net-mgmt
MASTER_SITES=	http://s-tech.elsat.net.pl/bmtools/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	A traffic analysis command-line utility

MAKE_ARGS=	${MAKE_ENV}
LDFLAGS+=	-lcompat
CFLAGS+=	-DOPEN_BSD=1 -DHAVE_REGEX -DSTREAM_ANALYZER -DIOCTL_GETWINSIZE -DAUTOSENSE_DLH

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/rate ${PREFIX}/bin/rate
	${INSTALL_MAN} ${WRKSRC}/doc/rate.1 ${PREFIX}/man/man1

MAN1=		rate.1
PLIST_FILES=	bin/rate

.include <bsd.port.mk>
