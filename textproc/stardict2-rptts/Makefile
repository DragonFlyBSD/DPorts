# Ports collection makefile for:	stardict2-rptts
# Date created:			27 Nov 2004
# Whom:				Shen Chun-Hsing <statue@freebsd.netlab.cse.yzu.edu.tw>
# $FreeBSD: ports/textproc/stardict2-rptts/Makefile,v 1.4 2012/11/17 06:02:22 svnexp Exp $
#

PORTNAME=	stardict2-rptts
PORTVERSION=	2.1.0
CATEGORIES=	textproc
MASTER_SITES=	SF/stardict/WyabdcRealPeopleTTS/${PORTVERSION}
DISTNAME=	WyabdcRealPeopleTTS
DIST_SUBDIR=	stardict
EXTRACT_ONLY=	# empty

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Real People TTS for StarDict

NO_BUILD=	yes
USE_BZIP2=	yes

do-install:
		${TAR} jxvf ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} -C ${PREFIX}/share

.include <bsd.port.mk>
