# Created by: Andrey Zakhvatov
# $FreeBSD: games/xisola/Makefile 321991 2013-06-28 21:48:59Z bapt $

PORTNAME=	xisola
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple board game for X Window System

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		imake
USE_XORG=	x11 xext xaw xmu xt sm ice
NO_INSTALL_MANPAGES=	yes

.include <bsd.port.options.mk>
post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
