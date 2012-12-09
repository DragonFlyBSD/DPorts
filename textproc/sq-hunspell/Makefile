# New ports collection makefile for:	sq-hunspell
# Date created:		2011-07-20
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/sq-hunspell/Makefile,v 1.5 2012/11/17 06:02:22 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	1.6.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.shkenca.org/shkarkime/
PKGNAMEPREFIX=	sq-
DISTNAME=	myspell-sq_AL-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Albanian hunspell dictionaries

USE_ZIP=	yes
NO_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/sq_AL.aff \
		%%DATADIR%%/sq_AL.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/sq_AL.aff ${WRKSRC}/sq_AL.dic ${DATADIR}/

.include <bsd.port.mk>
