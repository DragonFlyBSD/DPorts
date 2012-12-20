# New ports collection makefile for:	pear-Date_Holidays_PHPdotNet
# Date created:		2008-06-05
# Whom:			Thomas Abthorpe <tabthorpe@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Date_Holidays_PHPdotNet/Makefile,v 1.6 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	Date_Holidays_PHPdotNet
PORTVERSION=	0.1.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Driver based class to calculate birthdays of members of PHP.net

BUILD_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Date
FILES=		Holidays/Driver/PHPdotNet.php
TESTS=		Date_Holidays_Driver_PHPdotNet_TestSuite.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
