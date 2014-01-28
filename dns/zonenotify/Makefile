# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: dns/zonenotify/Makefile 340722 2014-01-22 17:00:46Z mat $

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
	@${REINPLACE_CMD} -e 's|/usr/local|${STAGEDIR}${PREFIX}|' \
		${WRKSRC}/Makefile

do-build:
	${CC} -o ${WRKSRC}/${PORTNAME} ${CFLAGS} ${WRKSRC}/zonenotify.c

.include <bsd.port.mk>
