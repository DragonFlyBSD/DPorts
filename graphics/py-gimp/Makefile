# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: graphics/py-gimp/Makefile 313872 2013-03-11 12:19:08Z kwm $
#    $MCom: ports/graphics/py-gimp/Makefile,v 1.6 2009/08/25 00:06:39 marcus Exp $

PORTREVISION=	0
PORTEPOCH=	0
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GIMP python plugin

GIMP_SLAVE=	pygimp

USE_PYTHON=	yes
USE_GNOME=	pygtk2

CONFIGURE_ARGS=	--enable-python
PLIST=	${.CURDIR}/pkg-plist

BUILD_WRKSRC=	${WRKSRC}/plug-ins/pygimp
INSTALL_WRKSRC=	${WRKSRC}/plug-ins/pygimp

MASTERDIR=	${.CURDIR}/../../graphics/gimp-app

.include "${MASTERDIR}/Makefile"
