# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/py-nzmath/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nzmath
PORTVERSION=	1.2.0
CATEGORIES=	math python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/NZMATH-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	NZMATH-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Number theory oriented calculation system

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	NZMATH

post-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/data/discriminant.csv ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/manual/*.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
