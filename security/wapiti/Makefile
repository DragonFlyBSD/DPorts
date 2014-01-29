# Created by: Philippe Audeoud <jadawin@tuxaco.net>
# $FreeBSD: security/wapiti/Makefile 341385 2014-01-27 12:14:09Z koobs $

PORTNAME=	wapiti
PORTVERSION=	2.3.0
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Wapiti is a vulnerability scanner for web applications

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup32>=0:${PORTSDIR}/www/py-beautifulsoup32 \
		${PYTHON_PKGNAMEPREFIX}requests1>=1.2.3:${PORTSDIR}/www/py-requests1

USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=yes

.include <bsd.port.mk>
