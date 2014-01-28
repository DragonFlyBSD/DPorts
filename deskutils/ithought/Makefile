# Created by: nbm
# $FreeBSD: deskutils/ithought/Makefile 340722 2014-01-22 17:00:46Z mat $

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
