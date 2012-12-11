# New ports collection makefile for:	py-nzmath
# Date created:				3rd June, 2011
# Whom:					Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/math/py-nzmath/Makefile,v 1.2 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	nzmath
PORTVERSION=	1.1.0
CATEGORIES=	math python
MASTER_SITES=	http://tnt.math.se.tmu.ac.jp/nzmath/download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	NZMATH-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Number theory oriented calculation system

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	NZMATH

post-install:
.if !defined(NOPORTDATA)
	${MKDIR} ${DATADIR}
	${CP} ${WRKSRC}/data/discriminant.csv ${DATADIR}
.endif

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${CP} ${WRKSRC}/manual/*.pdf ${DOCSDIR}
.endif

.include <bsd.port.mk>
