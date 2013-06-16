# Created by: John Hixson <john@ixsystems.com>
# $FreeBSD: www/py-djangotoolbox/Makefile 320554 2013-06-11 12:27:28Z koobs $

PORTNAME=	djangotoolbox
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	john@ixsystems.com
COMMENT=	A common API for running Django on non-relational/NoSQL databases

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
