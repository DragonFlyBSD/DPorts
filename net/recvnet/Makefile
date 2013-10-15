# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: net/recvnet/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	recvnet
PORTVERSION=	0.0.1
CATEGORIES=	net
MASTER_SITES=	http://www.vanheusden.com/Linux/ \
		CRITICAL
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Recvnet (inverse telnet) is a utility for debugging tcp connections

CFLAGS+=	-DVERSION=\"${PORTVERSION}\"
LDFLAGS+=	-lcurses

PLIST_FILES=	bin/recvnet

NO_STAGE=	yes
do-build:
	${CC} ${CFLAGS} -c ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}.o
	${CC} ${LDFLAGS} ${WRKSRC}/${PORTNAME}.o -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
