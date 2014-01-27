# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: devel/scons/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	scons
PORTVERSION=	2.3.0
CATEGORIES=	devel python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	gavin@16degrees.com.au
COMMENT=	Build tool alternative to make

RUN_DEPENDS+=	python2:${PORTSDIR}/lang/python2

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

PLIST_SUB+=	SCONS_VER=${PORTVERSION}

USE_PYTHON=	2


post-patch:
	@${REINPLACE_CMD} \
		-e 's,distutils\.command\.install$$,setuptools\.command\.install,' \
		-e 's,distutils\.command\.install\.,setuptools\.command\.install\.,' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
