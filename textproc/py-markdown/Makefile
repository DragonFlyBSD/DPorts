# Created by: Graham Todd <gtodd@bellanet.org>
# $FreeBSD: textproc/py-markdown/Makefile 315090 2013-03-24 03:08:36Z koobs $

PORTNAME=		markdown
PORTVERSION=		2.3.1
CATEGORIES=		textproc python
MASTER_SITES=		CHEESESHOP
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}
DISTNAME=		Markdown-${PORTVERSION}

MAINTAINER=		koobs@FreeBSD.org
COMMENT=		Text markup to HTML conversion engine for Python

LICENSE=	BSD

TEST_DEPENDS=	nosetests:${PORTSDIR}/devel/py-nose

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

PYDISTUTILS_PKGNAME=	Markdown

regression-test: build
	@cd ${WRKSRC} && nosetests

.include <bsd.port.mk>
