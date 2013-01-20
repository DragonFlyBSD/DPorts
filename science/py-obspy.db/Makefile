# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/science/py-obspy.db/Makefile,v 1.6 2012/11/17 06:00:59 svnexp Exp $

PORTNAME=	obspy.db
PORTVERSION=	0.7.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A seismic waveform indexer and database for ObsPy

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}obspy-core>=0.4.6:${PORTSDIR}/science/py-obspy-core

USE_ZIP=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
