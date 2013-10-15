# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: shells/viewglob/Makefile 329747 2013-10-07 23:40:23Z marino $

PORTNAME=	viewglob
PORTVERSION=	2.0.4
PORTREVISION=	7
CATEGORIES=	shells
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GTK+ add-on to bash and zsh

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash
RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash

USES=		pkgconfig
USE_XORG=	x11
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
LDFLAGS+=	-lm

MAN1=		vgd.1 vgseer.1 viewglob.1

NO_STAGE=	yes
.include <bsd.port.mk>
