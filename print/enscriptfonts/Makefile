# New ports collection makefile for:	enscriptfonts
# Date created:			15 June, 1998
# Whom:				kline
#
# $FreeBSD: ports/print/enscriptfonts/Makefile,v 1.16 2012/11/17 06:00:49 svnexp Exp $
#

PORTNAME=	enscriptfonts
PORTVERSION=	0.81
CATEGORIES=	print
MASTER_SITES=	http://muuz.deadbbs.com/FreeBSD/xenscript/
DISTNAME=	enscript_fonts-0.81
EXTRACT_SUFX=	.tbz

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	More than 120 free- and share-ware fonts to extend enscript-1.5

NO_WRKSUBDIR=	YES
NO_MANCOMPRESS=	YES
NO_BUILD=	YES
SUB_FILES+=	pkg-message

# user should choose their own version
#RUN_DEPENDS=	enscript:${PORTSDIR}/print/enscript-letter

do-install:
	@${MKDIR} ${PREFIX}/share/enscript/xenscript
	@${CP} -p ${WRKDIR}/* ${PREFIX}/share/enscript/xenscript

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
