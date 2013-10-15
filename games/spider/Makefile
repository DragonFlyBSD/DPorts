# Created by: se
# $FreeBSD: games/spider/Makefile 327730 2013-09-20 17:36:33Z bapt $

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
MAN1=		spider.1
CFLAGS+=	-Wno-error=return-type

NO_STAGE=	yes
.include <bsd.port.mk>
