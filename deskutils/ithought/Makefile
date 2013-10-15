# Created by: nbm
# $FreeBSD: deskutils/ithought/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	ithought
PORTVERSION=	a5
PORTREVISION=	4
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-alpha

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An extensible text management system

USE_GNOME=	gtk12 libxml2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--datadir=${PREFIX}/libexec

NO_STAGE=	yes
.include <bsd.port.mk>
