# Created by: bland@FreeBSD.org
# $FreeBSD: ports/devel/py-icu/Makefile,v 1.10 2012/12/18 23:22:05 svnexp Exp $

PORTNAME=	icu
PORTVERSION=	1.5
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/P/PyICU
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyICU-${PORTVERSION}

MAINTAINER=	bland@FreeBSD.org
COMMENT=	Python extension wrapping IBM's ICU C++ API

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	PyICU
PYEASYINSTALL_ARCHDEP=	yes

MAKE_ENV+= \
	PYICU_INCLUDES="${PREFIX}/include" \
	PYICU_CFLAGS="-w:-DPYICU_VER=\"$(PORTVERSION)\"" \
	PYICU_LFLAGS="-L${PREFIX}/lib" \
	PYICU_LIBRARIES="icui18n:icuuc:icudata"

LIB_DEPENDS+=	icudata:${PORTSDIR}/devel/icu

.include <bsd.port.mk>
