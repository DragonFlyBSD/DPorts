# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/science/py-obspy.xseed/Makefile,v 1.7 2012/11/17 06:00:59 svnexp Exp $

PORTNAME=	obspy.xseed
PORTVERSION=	0.7.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Dataless SEED, RESP, and XML-SEED read and write support for ObsPy

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}obspy-core>=0:${PORTSDIR}/science/py-obspy-core
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}obspy-core>=0:${PORTSDIR}/science/py-obspy-core

USE_ZIP=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
