# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: sysutils/hachoir-wx/Makefile 334329 2013-11-19 17:07:02Z lwhsu $

PORTNAME=	hachoir-wx
PORTVERSION=	0.3
PORTREVISION=	4
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Hachoir GUI

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:${PORTSDIR}/devel/hachoir-parser

USE_PYTHON=	yes
USE_WX=		2.6+
WX_COMPS=	python
WX_UNICODE=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
