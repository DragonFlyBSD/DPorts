# New ports collection makefile for:	mythes
# Date created:		2011-07-21
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/ukrainian/mythes/Makefile,v 1.5 2012/11/17 06:02:26 svnexp Exp $
#

PORTNAME=	mythes
PORTVERSION=	1.6.5
PORTREVISION=	1
CATEGORIES=	ukrainian textproc
MASTER_SITES=	SF/ispell-uk/spell-uk/${PORTVERSION}
DISTNAME=	spell-uk-${PORTVERSION}
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Ukrainian thesaurus

LICENSE=	LGPL21 GPLv2
LICENSE_COMB=	dual

USE_PERL5_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/th_uk_UA.dat \
		%%DATADIR%%/th_uk_UA.idx
PLIST_DIRSTRY=	%%DATADIR%%

do-build:
	@${PERL} ${WRKSRC}/bin/th_gen_idx.pl < ${WRKSRC}/src/thesaurus/th_uk_UA.dat > ${WRKSRC}/src/thesaurus/th_uk_UA.idx

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/src/thesaurus/th_uk_UA.dat ${WRKSRC}/src/thesaurus/th_uk_UA.idx ${DATADIR}/

.include <bsd.port.mk>
