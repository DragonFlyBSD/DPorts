# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: devel/fnorb/Makefile 313303 2013-03-02 22:32:48Z lwhsu $

PORTNAME=	Fnorb
PORTVERSION=	1.3
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A CORBA 2.0 ORB written in Python

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:${PORTSDIR}/x11-toolkits/py-tkinter

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
