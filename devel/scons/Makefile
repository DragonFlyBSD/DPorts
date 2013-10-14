# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: devel/scons/Makefile 329039 2013-10-02 11:42:02Z bsam $

PORTNAME=	scons
PORTVERSION=	2.3.0
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	gavin@16degrees.com.au
COMMENT=	Build tool alternative to make

RUN_DEPENDS+=	python2:${PORTSDIR}/lang/python2

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_EGGINFODIR=	${PREFIX}/lib/scons-${PORTVERSION}

PLIST_SUB+=	SCONS_VER=${PORTVERSION}

USE_PYTHON=	-2.7

.include <bsd.port.mk>
