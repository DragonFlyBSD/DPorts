# Created by: se
# $FreeBSD: games/spider/Makefile 333467 2013-11-11 01:31:06Z danilo $

PORTNAME=	spider
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SUNSITE
MASTER_SITE_SUBDIR=	games/solitaires
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Challenging double decked solitaire game

USES=		imake
USE_XORG=	x11 xext xaw xmu xt sm ice xpm
INSTALL_TARGET=	install install.doc
CFLAGS+=	-Wno-error=return-type

.include <bsd.port.mk>
