# Created by: wen@FreeBSD.org
# $FreeBSD$

PORTNAME=	markupsafe
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	MarkupSafe-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Implements XML/HTML/XHTML Markup safe string for Python

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

USES=		python
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/markupsafe/_speedups*.so

.include <bsd.port.mk>
