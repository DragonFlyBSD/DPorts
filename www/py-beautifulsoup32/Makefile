# Created by: Mike Meyer <mwm@mired.org>
# $FreeBSD: www/py-beautifulsoup32/Makefile 329129 2013-10-02 23:38:51Z wg $

PORTNAME=	beautifulsoup
PORTVERSION=	3.2.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	http://www.crummy.com/software/BeautifulSoup/download/3.x/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	32
DISTNAME=	BeautifulSoup-${PORTVERSION}

MAINTAINER=	mwm@mired.org
COMMENT=	HTML/XML Parser for Python

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	BeautifulSoup

CONFLICTS=	py[0-9]*-beautifulsoup-3.0.*

NO_STAGE=	yes
.include <bsd.port.mk>
