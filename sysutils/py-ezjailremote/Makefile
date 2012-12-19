# $FreeBSD: ports/sysutils/py-ezjailremote/Makefile,v 1.2 2012/11/17 06:01:43 svnexp Exp $

PORTNAME=	ezjailremote
PORTVERSION=	0.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs.freebsd@gmail.com
COMMENT=	Remote control and convenience wrapper for ezjail

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fabric>0:${PORTSDIR}/devel/py-fabric

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
