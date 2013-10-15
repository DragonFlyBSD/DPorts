# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: databases/py-umemcache/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	umemcache
PORTVERSION=	1.6.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Memcache client written in highly optimized C++ with Python bindings

LICENSE=	BSD

USE_DOS2UNIX=		yes
USE_PYTHON=		-2.7
USE_PYDISTUTILS=	yes
USE_ZIP=		yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/umemcache.so

NO_STAGE=	yes
.include <bsd.port.mk>
