# $FreeBSD: devel/py-jellyfish/Makefile 333540 2013-11-12 00:11:57Z bdrewery $

PORTNAME=	jellyfish
PORTVERSION=	0.2.0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Library for doing approximate and phonetic matching of strings

LICENSE=	BSD

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

.include <bsd.port.mk>
