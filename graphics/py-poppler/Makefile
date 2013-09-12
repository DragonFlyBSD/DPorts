# Created by: Romain Tartiere <romain@blogreen.org>
# $FreeBSD: graphics/py-poppler/Makefile 325928 2013-09-01 22:50:06Z bapt $

PORTNAME=	poppler
PORTVERSION=	0.12.1
CATEGORIES=	graphics python
MASTER_SITES=	https://launchpad.net/poppler-python/trunk/development/+download/ \
		http://launchpadlibrarian.net/30270080/ \
		http://romain.blogreen.org/distfiles/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	py${PORTNAME}-${PORTVERSION}

MAINTAINER=	romain@FreeBSD.org
COMMENT=	Python bindings for the Poppler PDF rendering library

LIB_DEPENDS=	poppler-glib.8:${PORTSDIR}/graphics/poppler-glib

USE_PYTHON=	yes
GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_GNOME=	atk pygtk2

.include <bsd.port.mk>
