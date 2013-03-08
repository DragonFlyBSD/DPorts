# $FreeBSD: ports/devel/py-argh/Makefile,v 1.4 2013/02/03 15:57:52 svnexp Exp $

PORTNAME=	argh
PORTVERSION=	0.23.0
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
