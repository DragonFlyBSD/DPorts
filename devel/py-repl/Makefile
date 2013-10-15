# Created by: Hye-Shik Chang
# $FreeBSD: devel/py-repl/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	repl
PORTVERSION=	0.8.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyrepl-${PORTVERSION}
DIST_SUBDIR=	python

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Replacement for readline and interactive environment for Python

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	pyrepl

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		's|platforms =.*|zip_safe = False,|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
