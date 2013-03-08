# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/graphics/py-pillow/Makefile,v 1.3 2013/02/09 15:59:17 svnexp Exp $

PORTNAME=	pillow
PORTVERSION=	1.7.7
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PYDISTUTILS_PKGNAME}-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Fork of the Python Imaging Library (PIL)

LIB_DEPENDS=	jpeg:${PORTSDIR}/graphics/jpeg \
		freetype:${PORTSDIR}/print/freetype2

CONFLICTS_INSTALL=	py*-imaging-*

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

PYDISTUTILS_PKGNAME=	Pillow
PYEASYINSTALL_ARCHDEP=	yes

.include <bsd.port.mk>
