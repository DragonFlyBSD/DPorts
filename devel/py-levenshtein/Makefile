# Created by: Aron Stansvik <elvstone@gmail.com>
# $FreeBSD: devel/py-levenshtein/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	levenshtein
PORTVERSION=	0.10.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-Levenshtein-${PORTVERSION}

MAINTAINER=	elvstone@gmail.com
COMMENT=	Python extension computing string distances and similarities

LICENSE=	GPLv2

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/Levenshtein.so
USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYTHON_PREFIX=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	python-Levenshtein
PROJECTHOST=	py${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
