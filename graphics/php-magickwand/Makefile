# New ports collection makefile for:	php-magickwand
# Date created:			05 Jan 2005
# Whom:				<mark@goodstorm.com>
#
# $FreeBSD: ports/graphics/php-magickwand/Makefile,v 1.19 2012/12/11 20:58:17 svnexp Exp $
#

PORTNAME=	magickwand
PORTVERSION=	1.0.9
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	http://www.magickwand.org/download/php/
PKGNAMEPREFIX=	php-
DISTNAME=	MagickWandForPHP-${PORTVERSION}

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PHP extension to manipulate images

LIB_DEPENDS=	MagickWand:${PORTSDIR}/graphics/ImageMagick

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--with-magickwand=${LOCALBASE}

.include <bsd.port.mk>
