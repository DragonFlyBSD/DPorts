# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: science/py-scimath/Makefile 323513 2013-07-23 04:27:27Z wen $

PORTNAME=	scimath
PORTVERSION=	4.1.2
CATEGORIES=	science math python
MASTER_SITES=	http://www.enthought.com/repo/ets/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Scientific and Mathematical calculations

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}traits>=3.6.0:${PORTSDIR}/devel/py-traits
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=		yes
PYEASYINSTALL_ARCHDEP=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
