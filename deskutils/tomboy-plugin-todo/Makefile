# Created by: Romain Tartiere <romain@blogreen.org>
# $FreeBSD: deskutils/tomboy-plugin-todo/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tomboy-plugin-todo
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://romain.blogreen.org/distfiles/
DISTNAME=	tomboy-todo-${PORTVERSION}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Highlight FIXME, TODO, and XXX in your notes

BUILD_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy
RUN_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig

NO_STAGE=	yes
.include <bsd.port.mk>
