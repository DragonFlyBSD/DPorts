# New ports collection makefile for:	fnorb
# Date created:		12 Septermber 2000
# Whom:	      		Johann Visagie <johann@egenetics.com>
#
# $FreeBSD: ports/devel/fnorb/Makefile,v 1.21 2012/11/17 05:55:43 svnexp Exp $
#

PORTNAME=	Fnorb
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A CORBA 2.0 ORB written in Python

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/_tkinter.so:${PORTSDIR}/x11-toolkits/py-tkinter

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
