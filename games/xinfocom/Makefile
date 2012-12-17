# New ports collection makefile for:	xinfocom
# Date created:				7 May 1998
# Whom:					Matthew Hunt <mph@FreeBSD.org>
#
# $FreeBSD: ports/games/xinfocom/Makefile,v 1.15 2012/11/17 05:57:57 svnexp Exp $
#

PORTNAME=	xinfocom
PORTVERSION=	1.8m
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		http://ftp.giga.or.at/pub/ifarchive/interpreters-infocom-zcode/old/itf/
MASTER_SITE_SUBDIR=	mph
DISTNAME=	unix8m
EXTRACT_SUFX=	.tgz

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	An Infocom game interpreter for X11

PLIST_FILES=	bin/xinfocom
WRKSRC=		${WRKDIR}/xinfocom

USE_IMAKE=	yes
USE_XORG=	xt sm ice xext x11

.include <bsd.port.mk>
