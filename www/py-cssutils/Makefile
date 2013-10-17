# Created by: ijliao
# $FreeBSD: www/py-cssutils/Makefile 330296 2013-10-14 11:03:36Z sunpoet $

PORTNAME=	cssutils
PORTVERSION=	0.9.10
PORTEPOCH=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CSS Cascading Style Sheets library for Python

LICENSE=	LGPL3

OPTIONS_DEFINE=	EXAMPLES

NO_STAGE=	yes
USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	${MKDIR} ${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/examples/* ${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
