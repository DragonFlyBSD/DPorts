# New ports collection makefile for:   zonenotify
# Date created:		19 August 2005
# Whom:			Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/dns/zonenotify/Makefile,v 1.10 2012/11/17 05:57:11 svnexp Exp $
#

PORTNAME=	zonenotify
PORTVERSION=	0.1
CATEGORIES=	dns
MASTER_SITES=	http://www.morettoni.net/bsd/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A dns notify sender written in C

MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/zonenotify
WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|' \
		${WRKSRC}/Makefile

do-build:
	${CC} -o ${WRKSRC}/${PORTNAME} ${CFLAGS} ${WRKSRC}/zonenotify.c

.include <bsd.port.mk>
