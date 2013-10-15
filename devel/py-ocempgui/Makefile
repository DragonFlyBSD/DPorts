# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: devel/py-ocempgui/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	ocempgui
PORTVERSION=	0.2.9
PORTREVISION=	5
CATEGORIES=	devel python
MASTER_SITES=	SF/ocemp/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	OcempGUI-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	GUI toolkit in python

BUILD_DEPENDS=	${LOCALBASE}/include/${PYTHON_VERSION}/pygame/pygame.h:${PORTSDIR}/devel/py-game
RUN_DEPENDS=	${LOCALBASE}/include/${PYTHON_VERSION}/pygame/pygame.h:${PORTSDIR}/devel/py-game

USE_GNOME=	atk
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	OcempGUI

NO_STAGE=	yes
post-patch:
.if defined(NOPORTDOCS)
	${REINPLACE_CMD} -i "" -e 's|datafiles + docfiles|datafiles|g' ${WRKSRC}/setup.py
.endif

.include <bsd.port.mk>
