# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/science/py-obspy.gse2/Makefile,v 1.9 2012/11/17 06:00:59 svnexp Exp $

PORTNAME=	obspy.gse2
PORTVERSION=	0.7.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Read & write seismograms, Format GSE2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}obspy-core>0:${PORTSDIR}/science/py-obspy-core

USE_ZIP=		yes
USE_PYTHON=		yes
PYEASYINSTALL_ARCHDEP=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
