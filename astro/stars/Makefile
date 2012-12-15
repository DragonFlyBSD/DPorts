# New ports collection makefile for:   stars-1.0
# Date created:		10 Jul 1996
# Whom:			searle
#
# $FreeBSD: ports/astro/stars/Makefile,v 1.27 2012/11/17 05:54:26 svnexp Exp $
#

PORTNAME=	stars
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	astro
MASTER_SITES=	http://hpux.connect.org.uk/ftp/hpux/X11/Demos/${PORTNAME}-${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src-11.00

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Star field demo

PLIST_FILES=	bin/stars
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
USE_XORG=	x11

do-build:
	@${CC} -I${PREFIX}/include ${CFLAGS} -c ${WRKSRC}/xwin.c -o ${WRKSRC}/xwin.o
	@${CC} -I${PREFIX}/include ${CFLAGS} -c ${WRKSRC}/main.c -o ${WRKSRC}/main.o
	@${CC} ${WRKSRC}/main.o ${WRKSRC}/xwin.o -L${PREFIX}/lib -lX11 -lm -o ${WRKSRC}/stars

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/stars ${PREFIX}/bin/stars

.include <bsd.port.mk>
