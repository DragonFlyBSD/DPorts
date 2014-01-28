# Created by: Kimura Fuyuki <fuyuki@hadaly.org>
# $FreeBSD: x11-toolkits/py-gtkglext/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gtkglext
PORTVERSION=	1.1.0
PORTREVISION=	7
CATEGORIES=	x11-toolkits python
MASTER_SITES=	SF/${PORTNAME}/py${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pygtkglext-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python binding for GtkGLExt

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/OpenGL/__init__.py:${PORTSDIR}/graphics/py-opengl
LIB_DEPENDS=	gtkglext-x11-1.0.0:${PORTSDIR}/x11-toolkits/gtkglext
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/OpenGL/__init__.py:${PORTSDIR}/graphics/py-opengl

USE_BZIP2=	yes
USE_PYTHON=	yes
USES=		gmake pathfix pkgconfig
USE_GNOME=	pygtk2
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
