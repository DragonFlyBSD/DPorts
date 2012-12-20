# New ports collection makefile for:	pear-Date_Holidays_Iceland
# Date created:		2008-06-04
# Whom:			Thomas Abthorpe <tabthorpe@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Date_Holidays_Iceland/Makefile,v 1.5 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	Date_Holidays_Iceland
PORTVERSION=	0.1.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Driver based class to calculate holidays in Iceland

BUILD_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays
RUN_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays

CATEGORY=	Date
FILES=		Holidays/Driver/Iceland.php
TESTS=		Date_Holidays_Driver_Iceland_TestSuite.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
