# Created by: KT Sin <ktsin@acm.org>
# $FreeBSD: net/gkrellmwireless2/Makefile 326934 2013-09-10 21:31:33Z antoine $

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

.include <bsd.port.mk>
