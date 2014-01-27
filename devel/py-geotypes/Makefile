# Created by: wenheping@gmail.com
# $FreeBSD: devel/py-geotypes/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	geotypes
PORTVERSION=	0.7.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://www.initd.org/svn/psycopg/geotypes/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	GeoTypes-${PORTVERSION}

MAINTAINER=	wenheping@gmail.com
COMMENT=	A Python Interface to Support PostGIS

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYTHON_PKGNAMEPREFIX=	yes
PYDISTUTILS_EGGINFO=	GeoTypes-0.7.0-py${PYTHON_VER}.egg-info
WRKSRC=		${WRKDIR}/${DISTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
