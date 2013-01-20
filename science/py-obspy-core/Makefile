# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/science/py-obspy-core/Makefile,v 1.9 2012/11/17 06:00:59 svnexp Exp $

PORTNAME=	obspy-core
PORTVERSION=	0.7.1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S,-,.,}-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Core Classes of Python for Seismological Observatories

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.6.0:${PORTSDIR}/science/py-scipy \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0.90.1:${PORTSDIR}/math/py-matplotlib \
		${PYTHON_PKGNAMEPREFIX}lxml>=2.2:${PORTSDIR}/devel/py-lxml
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_ZIP=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	obspy.core

.include <bsd.port.mk>
