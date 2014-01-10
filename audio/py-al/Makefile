# $FreeBSD: audio/py-al/Makefile 337464 2013-12-25 23:29:34Z antoine $

PORTNAME=	al
PORTVERSION=	0.1.0
CATEGORIES=	audio python
MASTER_SITES=	http://cdn.bitbucket.org/marcusva/py-al/downloads/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyAL-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	PyAL is a binding of OpenAL for Python

USES=		openal:al
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	PyAL

.include <bsd.port.mk>
