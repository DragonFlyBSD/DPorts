# Created by: Romain Tartiere <romain@blogreen.org>
# $FreeBSD: deskutils/tomboy-plugin-reminder/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tomboy-plugin-reminder
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://flukkost.nu/
DISTNAME=	tomboy-reminder-${PORTVERSION}

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Automatically open notes at a given date and time

BUILD_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy
RUN_DEPENDS=	tomboy:${PORTSDIR}/deskutils/tomboy

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig

NO_STAGE=	yes
.include <bsd.port.mk>
