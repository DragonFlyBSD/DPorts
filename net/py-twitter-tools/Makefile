# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: net/py-twitter-tools/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	twitter-tools
PORTVERSION=	1.9.4
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	twitter-${PORTVERSION}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python API and command-line toolset for Twitter

USE_GITHUB=		yes
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

GH_ACCOUNT=	sixohsix
GH_PROJECT=	twitter
GH_TAGNAME=	${DISTNAME}
GH_COMMIT=	479117d

PYDISTUTILS_PKGNAME=	twitter

NO_STAGE=	yes
.include <bsd.port.mk>
