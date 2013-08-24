# Created by: Dryice Liu <dryice@liu.com.cn>
# $FreeBSD: www/pyblosxom/Makefile 324919 2013-08-18 14:36:52Z wen $

PORTNAME=	pyblosxom
DISTVERSION=	1.5.3
CATEGORIES=	www python
MASTER_SITES=	http://pyblosxom.github.io/download/

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	A lightweight weblog system

LICENSE=	MIT

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} \. ${DOCSDIR}
.endif

.include <bsd.port.mk>
