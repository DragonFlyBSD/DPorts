# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: ports/security/py-ssh/Makefile,v 1.6 2012/11/17 06:01:17 svnexp Exp $

PORTNAME=	ssh
PORTVERSION=	1.8.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Python SSH2 protocol library

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycrypto>=2.1:${PORTSDIR}/security/py-pycrypto

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
