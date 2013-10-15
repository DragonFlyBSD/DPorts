# Created by: Edwin Groothuis <edwin@mavetju.org>
# $FreeBSD: math/rpcalc/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	rpcalc
PORTVERSION=	0.6.0
PORTREVISION=	4
CATEGORIES=	math
MASTER_SITES=	BERLIOS

MAINTAINER=	edwin@mavetju.org
COMMENT=	Simple RPN calculator

RUN_DEPENDS=	${PYTHON_SITELIBDIR}//PyQt4/QtGui.so:${PORTSDIR}/x11-toolkits/py-qt4-gui

WRKSRC=		${WRKDIR}/rpCalc

NO_BUILD=	yes
USE_PYTHON=	yes

NO_STAGE=	yes
do-install:
	cd ${WRKSRC} && ${PYTHON_CMD} install.py

.include <bsd.port.mk>
