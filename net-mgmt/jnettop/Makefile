# Created by: Ryan Steinmetz
# $FreeBSD: net-mgmt/jnettop/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	jnettop
PORTVERSION=	0.13.0
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.13

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Traffic visualizer, similar to nettop

MAN8=		jnettop.8

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GNOME=	glib20
USE_GMAKE=	yes
NO_STAGE=	yes

LICENSE=	GPLv2

CONFIGURE_ARGS=	--prefix=${PREFIX}

.if defined(WITH_DAG)
post-configure:
	${ECHO_CMD} "#define BSD 1" >> ${WRKSRC}/config.h
.endif

.include <bsd.port.mk>
