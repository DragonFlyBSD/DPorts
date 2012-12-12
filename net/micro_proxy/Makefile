# New ports collection makefile for:	micro_proxy
# Date created:				 2 Sep 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/net/micro_proxy/Makefile,v 1.8 2012/11/17 06:00:05 svnexp Exp $
#

PORTNAME=	micro_proxy
PORTVERSION=	20021030
CATEGORIES=	net
MASTER_SITES=	http://www.acme.com/software/micro_proxy/ \
		CRITICAL
DISTNAME=	${PORTNAME}_30oct2002

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A really small HTTP/HTTPS proxy

MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	libexec/micro_proxy
MAN8=		micro_proxy.8
SUB_FILES=	pkg-message

do-build:
	${CC} ${CFLAGS} -c ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}.o
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.o -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/libexec
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.8 ${MANPREFIX}/man/man8

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
