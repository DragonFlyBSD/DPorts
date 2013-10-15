# Created by: ijliao
# $FreeBSD: math/gambit/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	gambit
PORTVERSION=	13.1.0
CATEGORIES=	math
MASTER_SITES=	SF/gambit/${PORTNAME}13/${PORTVERSION}/

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A library of tools for doing computation in game theory

LICENSE=	GPLv2

USE_GNOME=	gtk20
USE_WX=		2.8
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-wx-config=${WX_CONFIG}

NO_STAGE=	yes
.include <bsd.port.mk>
