# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/databases/py-umemcache/Makefile,v 1.5 2013/02/09 15:58:53 svnexp Exp $

PORTNAME=	umemcache
PORTVERSION=	1.6
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

.include <bsd.port.mk>
