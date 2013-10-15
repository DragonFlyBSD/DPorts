# $FreeBSD: devel/py-Products.MIMETools/Makefile 327992 2013-09-23 12:52:16Z rm $

PORTNAME=	Products.MIMETools
PORTVERSION=	2.13.0
CATEGORIES=	devel python zope
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Provides the <!--#mime--> tag for DocumentTemplate

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}DocumentTemplate>=0:${PORTSDIR}/devel/py-DocumentTemplate

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
USE_ZIP=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
