# Created by: ijliao
# $FreeBSD: devel/log4c/Makefile 314640 2013-03-19 13:04:30Z eadler $

PORTNAME=	log4c
PORTVERSION=	1.2.2
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Logging for C Library

LICENSE=	LGPL21

OPTIONS_DEFINE=	EXPAT
OPTIONS_DEFAULT=EXPAT

USES=	pathfix
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MEXPAT}
LIB_DEPENDS+=	expat:${PORTSDIR}/textproc/expat2
.else
CONFIGURE_ARGS+=--without-expat
.endif

.include <bsd.port.mk>
