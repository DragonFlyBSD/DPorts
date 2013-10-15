# Created by: Beech Rintoul <horde@FreeBSD.org
# $FreeBSD: devel/horde3-whups/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	whups
PORTVERSION=	1.0.1
PORTREVISION=	5
CATEGORIES=	devel www

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Bug tracking/ticketing system

USE_HORDE=	base pkg-message
USES=		gettext
PORTDOCS=	README CHANGES CREDITS INSTALL TODO lighttpd-whups.conf
NO_BUILD=	yes

NO_STAGE=	yes
.include "${.CURDIR}/../../www/horde3-base/bsd.horde.mk"
.include <bsd.port.mk>
