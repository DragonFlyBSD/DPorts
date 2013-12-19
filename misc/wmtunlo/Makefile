# Created by: Adam Weinberger <adam@vectors.cx>
# $FreeBSD: misc/wmtunlo/Makefile 336008 2013-12-09 16:52:57Z danilo $

PORTNAME=	wmtunlo
PORTVERSION=	0.1.3
PORTREVISION=	2
CATEGORIES=	misc windowmaker
MASTER_SITES=	http://www.gnu-darwin.org/distfiles/ \
		http://cvsup.theplanet.com/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Falling-down-a-tunnel dockapp

LICENSE=	GPLv2

USE_XORG=	x11 xpm xextproto
ALL_TARGET=	wmtunlo

OPTIONS_DEFINE=	EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmtunlo ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* \
		${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
