# $FreeBSD: devel/py-unittest2/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	unittest2
PORTVERSION=	0.5.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Unittest features for Python 2.7 backported to Python 2.3+

LICENSE=	BSD

PLIST_SUB+=	PYTHON_VER=${PYTHON_VER}
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
