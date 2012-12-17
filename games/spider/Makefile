# New ports collection makefile for:    spider
# Date created:         2 Oct 1995
# Whom:                 se
#
# $FreeBSD: ports/games/spider/Makefile,v 1.17 2012/11/17 05:57:53 svnexp Exp $
#

PORTNAME=	spider
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	games/solitaires
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A challenging double decked solitaire game

USE_IMAKE=	yes
USE_XORG=	x11 xext xaw xmu xt sm ice xpm
INSTALL_TARGET=	install install.doc
MAN1=		spider.1

.include <bsd.port.mk>
