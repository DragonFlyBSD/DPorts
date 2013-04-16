# Created by: Adam Weinberger <adam@vectors.cx>
# $FreeBSD: misc/wmtunlo/Makefile 315240 2013-03-25 18:44:20Z eadler $

PORTNAME=	wmtunlo
PORTVERSION=	0.1.3
PORTREVISION=	2
CATEGORIES=	misc windowmaker
MASTER_SITES=	http://www.gnu-darwin.org/distfiles/ \
		http://cvsup.theplanet.com/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Falling-down-a-tunnel dockapp

USE_XORG=	x11 xpm xextproto
ALL_TARGET=	wmtunlo

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/wmtunlo ${PREFIX}/bin
.ifndef NOPORTEXAMPLES
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_SCRIPT} ${WRKSRC}/examples/* \
		${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
