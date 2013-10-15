# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: security/py-pysha3/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pysha3
PORTVERSION=	0.3
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	SHA-3 (Keccak) for Python

# Python3 ready
USE_PYTHON=	yes
USE_PYDISTUTILS=yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/_sha3.so \
		%%PYTHON_SITELIBDIR%%/sha3.py \
		%%PYTHON_SITELIBDIR%%/sha3.pyc \
		%%PYTHON_SITELIBDIR%%/sha3.pyo

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${FILESDIR}/py3k-fix-pkg-plist.inc"
.endif

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.post.mk>
