# New ports collection makefile for:	nl-hunspell
# Date created:		2012-02-03
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/nl-hunspell/Makefile,v 1.2 2012/11/17 06:02:03 svnexp Exp $
#

PORTNAME=	hunspell
PORTVERSION=	2.10
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}
PKGNAMEPREFIX=	nl-
DISTNAME=	OpenTaal-${PORTVERSION:R}${PORTVERSION:E}G-LO
EXTRACT_SUFX=	.oxt
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Dutch hunspell dictionaries

LICENSE=	BSD

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/nl_NL.aff \
		%%DATADIR%%/nl_NL.dic
PLIST_DIRSTRY=	%%DATADIR%%

NLALIASES=	nl_AW nl_BE
.for ALIAS in ${NLALIASES}
PLIST_FILES+=	%%DATADIR%%/${ALIAS}.aff \
		%%DATADIR%%/${ALIAS}.dic
.endfor

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/nl_NL.aff ${DATADIR}/nl_NL.aff
	${INSTALL_DATA} ${WRKSRC}/nl_NL.dic ${DATADIR}/nl_NL.dic
.for ALIAS in ${NLALIASES}
	${LN} -s nl_NL.aff ${DATADIR}/${ALIAS}.aff
	${LN} -s nl_NL.dic ${DATADIR}/${ALIAS}.dic
.endfor

.include <bsd.port.mk>
