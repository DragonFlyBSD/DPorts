# $FreeBSD: ports/devel/py-argh/Makefile,v 1.3 2012/11/17 05:56:45 svnexp Exp $

PORTNAME=	argh
PORTVERSION=	0.15.1
#PORTREVISION=	0
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Simple (Python) argparse wrapper

LICENSE=	LGPL3

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

# Python3 ready (installation tested)
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
