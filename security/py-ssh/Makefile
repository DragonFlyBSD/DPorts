# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: security/py-ssh/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
