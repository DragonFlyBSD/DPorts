# Created by: Douglas Thrift
# $FreeBSD: www/trac-TracGoogleAnalytics/Makefile 335034 2013-11-27 16:43:52Z sunpoet $

PORTNAME=	TracGoogleAnalytics
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	www devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	trac-

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Trac plugin to enable logging by Google Analytics

LICENSE=	BSD

BUILD_DEPENDS=	tracd:${PORTSDIR}/www/trac \
		${PYTHON_PKGNAMEPREFIX}Genshi>=0.5:${PORTSDIR}/textproc/py-genshi
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
