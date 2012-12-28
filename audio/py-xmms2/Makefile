# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: ports/audio/py-xmms2/Makefile,v 1.14 2012/11/17 05:54:42 svnexp Exp $

PORTREVISION=	5

CATEGORIES=	audio python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Python Bindings for XMMS2

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/Pyrex/__init__.py:${PORTSDIR}/devel/pyrex
LIB_DEPENDS+=	xmmsclient.6:${PORTSDIR}/audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USE_PYTHON=	yes

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	python

.include "${MASTERDIR}/Makefile"
