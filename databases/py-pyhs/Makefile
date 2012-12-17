# New ports collection makefile for:	py-pyhs
# Date created:		2011-09-22
# Whom:			Li-Wen Hsu <lwhsu@FreeBSD.org>
#
# $FreeBSD: ports/databases/py-pyhs/Makefile,v 1.2 2012/11/17 05:55:22 svnexp Exp $
#

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

.include <bsd.port.mk>
