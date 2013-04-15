# New ports collection makefile for: ithought
# Date created:		20 Feb 2001
# Whom:			nbm
#
# $FreeBSD: deskutils/ithought/Makefile 300896 2012-07-14 13:54:48Z beat $
#

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

.include <bsd.port.mk>
