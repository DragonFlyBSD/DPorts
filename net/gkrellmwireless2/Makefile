# Created by: KT Sin <ktsin@acm.org>
# $FreeBSD: net/gkrellmwireless2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gkrellmwireless
PORTVERSION=	2.0.2
PORTREVISION=	13
CATEGORIES=	net
MASTER_SITES=	http://gkrellm.luon.net/files/

MAINTAINER=	ktsin@acm.org
COMMENT=	GKrellM wireless plugin

BUILD_DEPENDS=	${LOCALBASE}/include/gkrellm2/gkrellm.h:${PORTSDIR}/sysutils/gkrellm2
RUN_DEPENDS=	gkrellm:${PORTSDIR}/sysutils/gkrellm2

WRKSRC=		${WRKDIR}/gkrellmwireless

USE_XORG=	x11
USES=		gmake pkgconfig

NO_STAGE=	yes
.include <bsd.port.mk>
