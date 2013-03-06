# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/graphics/evas_generic_loaders-ps/Makefile,v 1.5 2013/01/15 17:46:00 svnexp Exp $

PORTNAME=	ps
PORTVERSION=	1.7.5
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	evas_generic_loaders-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Additional loader for Evas (ps)

LICENSE=	GPLv2

LIB_DEPENDS=	spectre:${PORTSDIR}/print/libspectre

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	eina
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes

BINSRC=		${WRKSRC}/src/bin/${PORTNAME}

do-build:
	${MAKE} -C ${BINSRC}

do-install:
	${MAKE} -C ${BINSRC} install

.include <bsd.port.mk>
