# New ports collection makefile for: science/veusz
# Date created:		04 Jan 2011
# Whom:			Stas Timokhin <devel@stasyan.com>
#
# $FreeBSD: ports/science/veusz/Makefile,v 1.6 2012/11/17 06:01:00 svnexp Exp $
#

PORTNAME=	veusz
PORTVERSION=	1.12
PORTREVISION=	2
CATEGORIES=	science kde
MASTER_SITES=	http://download.gna.org/veusz/

MAINTAINER=	devel@stasyan.com
COMMENT=	Scientific plotting package

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_SITELIBDIR}/PyQt4/QtGui.so:${PORTSDIR}/x11-toolkits/py-qt4-gui
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes
INSTALLS_EGGINFO=	yes

.include <bsd.port.mk>
