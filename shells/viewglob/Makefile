# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: shells/viewglob/Makefile 337661 2013-12-27 09:21:28Z bapt $

PORTNAME=	viewglob
PORTVERSION=	2.0.4
PORTREVISION=	7
CATEGORIES=	shells
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK+ add-on to bash and zsh

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash
RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

USES=		pkgconfig
USE_XORG=	x11
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
LDFLAGS+=	-lm

.include <bsd.port.mk>
