# Ports collection makefile for:  pear-Payment_DTA
# Date created:			  9 December 2008
# Whom:				  Dorit Rottner (<rottner@punkt.de>)
#
# $FreeBSD: ports/finance/pear_Payment_DTA/Makefile,v 1.3 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	Payment_DTA
PORTVERSION=	1.2.1
CATEGORIES=	finance pear

MAINTAINER=	rottner@punkt.de
COMMENT=	PEAR class to create and handle DTA files used in Germany

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Payment
FILES=		DTA.php
TESTS=		DTATest.php
EXAMPLES=	example_debit.php example_credit.php
_EXAMPLESDIR=	docs/example

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
