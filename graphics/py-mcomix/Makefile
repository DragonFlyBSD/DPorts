# Created by: Ashish SHUKLA <ashish@FreeBSD.org>
# $FreeBSD: graphics/py-mcomix/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	mcomix
PORTVERSION=	0.99
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/MComix-${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	A GTK2 comic book viewer

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}imaging>=0:${PORTSDIR}/graphics/py-imaging
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_BZIP2=		yes
USE_GNOME=		pygtk2
USE_PYTHON=		2.6+
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
