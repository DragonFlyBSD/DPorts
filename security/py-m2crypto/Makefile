# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: head/security/py-m2crypto/Makefile 342496 2014-02-04 11:37:32Z sunpoet $

PORTNAME=	m2crypto
PORTVERSION=	0.22.3
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	M2Crypto-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Crypto and SSL toolkit for Python

BUILD_DEPENDS=	${LOCALBASE}/bin/swig:${PORTSDIR}/devel/swig13

PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_BUILDARGS=	build_ext --openssl="${OPENSSLBASE}"
USE_OPENSSL=	yes
USE_PYDISTUTILS=yes
USE_PYTHON=	2

.include <bsd.port.mk>
