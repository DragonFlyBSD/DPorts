# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: dns/zonenotify/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	zonenotify
PORTVERSION=	0.1
CATEGORIES=	dns
MASTER_SITES=	http://www.morettoni.net/bsd/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	DNS notify sender written in C

PLIST_FILES=	bin/zonenotify
WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' \
		${WRKSRC}/Makefile

do-build:
	${CC} -o ${WRKSRC}/${PORTNAME} ${CFLAGS} ${WRKSRC}/zonenotify.c

.include <bsd.port.mk>
