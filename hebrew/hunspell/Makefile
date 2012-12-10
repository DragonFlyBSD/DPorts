# New ports collection makefile for:	hunspell
# Date created:		2011-07-20
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/hebrew/hunspell/Makefile,v 1.9 2012/11/17 05:58:27 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	1.2
CATEGORIES=	hebrew textproc
MASTER_SITES=	http://hspell.ivrix.org.il/ \
		LOCAL/sunpoet/${PORTNAME}
DISTNAME=	hspell-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Hebrew hunspell dictionaries

BUILD_DEPENDS=	iconv:${PORTSDIR}/converters/libiconv

ALL_TARGET=	hunspell
CONFIGURE_ARGS=	--enable-fatverb
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_PERL5_BUILD=	yes

PLIST_FILES=	%%DATADIR%%/he.aff \
		%%DATADIR%%/he.dic
PLIST_DIRSTRY=	%%DATADIR%%

post-patch:
	@${REINPLACE_CMD} 's|/usr/bin/perl|${PERL}|g' ${WRKSRC}/pmerge

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/he.aff ${WRKSRC}/he.dic ${DATADIR}/

.include <bsd.port.mk>
