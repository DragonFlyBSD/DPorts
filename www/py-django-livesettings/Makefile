# Created by: Kevin Golding <ports@caomhin.org>
# $FreeBSD: www/py-django-livesettings/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	django-livesettings
DISTVERSION=	1.4-12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
MASTER_SITE_SUBDIR=	source/d/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@caomhin.org
COMMENT=	Configure Django project settings via admin interface

LICENSE=	BSD

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools_hg>=0.4:${PORTSDIR}/devel/py-setuptools_hg
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django>0:${PORTSDIR}/www/py-django

USE_PYTHON=	2
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	${PORTNAME:S/-/_/}
PYDISTUTILS_PKGVERSION=	${DISTVERSION:S/-/_/}

NO_STAGE=	yes
post-patch:
	@${FIND} ${WRKSRC} -type f -name "*.orig" -delete

.include <bsd.port.mk>
