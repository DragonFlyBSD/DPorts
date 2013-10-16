# Created by: Thierry Thomas (<thierry@thomas.as>)
# $FreeBSD: deskutils/horde3-kronolith/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	kronolith
PORTVERSION=	2.3.6
DISTVERSIONSUFFIX=
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	deskutils www

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Calendar application

RUN_DEPENDS=	${LOCALBASE}/share/pear/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays

USE_HORDE=	base
USES=		gettext
PORTDOCS=	README CHANGES CREDITS INSTALL RELEASE_NOTES TODO UPGRADING

NO_STAGE=	yes
.include "${.CURDIR}/../../www/horde3-base/bsd.horde.mk"
.include <bsd.port.mk>
