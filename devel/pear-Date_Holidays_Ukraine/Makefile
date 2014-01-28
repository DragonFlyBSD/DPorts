# $FreeBSD: devel/pear-Date_Holidays_Ukraine/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Date_Holidays_Ukraine
PORTVERSION=	0.1.2
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Driver based class to calculate holidays in the Ukraine

BUILD_DEPENDS=	${PEARDIR}/Date/Holidays.php:${PORTSDIR}/devel/pear-Date_Holidays
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Date
FILES=		Holidays/Driver/Ukraine.php
TESTS=		Date_Holidays_Driver_Ukraine_TestSuite.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
