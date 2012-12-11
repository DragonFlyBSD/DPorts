# New ports collection makefile for:	ro-hunspell
# Date created:		2011-07-21
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/ro-hunspell/Makefile,v 1.7 2012/11/17 06:02:19 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	3.3.7
CATEGORIES=	textproc
MASTER_SITES=	SF/rospell/Romanian%20dictionaries/dict-${PORTVERSION}/
PKGNAMEPREFIX=	ro-
DISTNAME=	ro_RO.${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Romanian hunspell dictionaries

LICENSE=	LGPL21 GPLv2 MPL
LICENSE_COMB=	dual

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/ro_RO.aff \
		%%DATADIR%%/ro_RO.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/ro_RO.aff ${WRKSRC}/ro_RO.dic ${DATADIR}/

.include <bsd.port.mk>
