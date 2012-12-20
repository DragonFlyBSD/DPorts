# New ports collection makefile for:	pear-Date_Holidays_Discordian
# Date created:		2008-06-04
# Whom:			Thomas Abthorpe <tabthorpe@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Date_Holidays_Discordian/Makefile,v 1.6 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	Date_Holidays_Discordian
PORTVERSION=	0.1.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Driver based class to calculate Discordian holidays

BUILD_DEPENDS=  ${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays
RUN_DEPENDS:=    ${BUILD_DEPENDS}

CATEGORY=       Date
FILES=          Holidays/Driver/Discordian.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
