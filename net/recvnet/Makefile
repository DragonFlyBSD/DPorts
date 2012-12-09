# New ports collection makefile for:	recvnet
# Date created:				27 Sep 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/net/recvnet/Makefile,v 1.6 2012/11/17 06:00:17 svnexp Exp $
#

PORTNAME=	recvnet
PORTVERSION=	0.0.1
CATEGORIES=	net
MASTER_SITES=	http://www.vanheusden.com/Linux/ \
		CRITICAL
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Recvnet (inverse telnet) is a utility for debugging tcp connections

MAKE_JOBS_SAFE=	yes

CFLAGS+=	-DVERSION=\"${PORTVERSION}\"
LDFLAGS+=	-lcurses

PLIST_FILES=	bin/recvnet

do-build:
	${CC} ${CFLAGS} -c ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}.o
	${CC} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.o -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
