# Created by: Vsevolod Stakhov <vsevolod@highsecure.ru>
# $FreeBSD: science/py-paida/Makefile 327767 2013-09-20 22:48:30Z bapt $

PORTNAME=	paida
PORTVERSION=	3.2.1.2.10
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-3.2.1_2.10.1
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-3.2.1_2.10.1

MAINTAINER=	wenheping@gmail.com
COMMENT=	Pure Python scientific analysis package

.if !defined(NO_GUI)
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}tkinter>0:${PORTSDIR}/x11-toolkits/py-tkinter
.endif

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGVERSION=	3.2.1_2.10.1

NO_STAGE=	yes
.include <bsd.port.mk>
