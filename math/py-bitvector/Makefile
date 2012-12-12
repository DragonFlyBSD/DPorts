# New ports collection makefile for:	py-bitvector
# Date created:		2006-12-27
# Whom:			Li-Wen Hsu <lwhsu@lwhsu.org>
#
# $FreeBSD: ports/math/py-bitvector/Makefile,v 1.7 2012/11/17 05:59:29 svnexp Exp $
#

PORTNAME=	bitvector
PORTVERSION=	3.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	BitVector-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	A pure-Python memory-efficient packed representation for bit arrays

LICENSE=	PSFL

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	BitVector

PORTDOCS=	README BitVector-${PORTVERSION}.html

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/BitVector.py \
		%%PYTHON_SITELIBDIR%%/BitVector.pyc \
		%%PYTHON_SITELIBDIR%%/BitVector.pyo

post-extract:
	@${RM} -f ${WRKSRC}/test.py

.if !defined(NOPORTDOCS)
DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

regression-test:
	@(cd ${WRKSRC}/TestBitVector && ${PYTHON_CMD} Test.py)

.include <bsd.port.mk>
