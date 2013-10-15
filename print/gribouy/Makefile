# Created by: bland@FreeBSD.org
# $FreeBSD: print/gribouy/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	gribouy
PORTVERSION=	0.0.8
PORTREVISION=	13
CATEGORIES=	print gnome
#MASTER_SITES=	${MASTER_SITE_SAVANNAH}
#MASTER_SITE_SUBDIR=	gribouy/unstable.pkg/${PORTVERSION:R}
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	bland

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gribouy is a Type1 font editor

USES=		gmake pkgconfig
USE_GNOME=      gnomeprefix gnomehack libglade2 libgnomeui
GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
