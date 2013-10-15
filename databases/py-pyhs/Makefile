# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: databases/py-pyhs/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	pyhs
PORTVERSION=	0.2.4
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-handler-socket-${PORTVERSION}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	HandlerSocket client for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	python_handler_socket
PYEASYINSTALL_ARCHDEP=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
