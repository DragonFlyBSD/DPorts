# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: ports/sysutils/py-ezjailremote/Makefile,v 1.3 2013/02/09 15:59:45 svnexp Exp $

PORTNAME=	ezjailremote
PORTVERSION=	0.2
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Remote control and convenience wrapper for ezjail

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fabric>0:${PORTSDIR}/devel/py-fabric

USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
