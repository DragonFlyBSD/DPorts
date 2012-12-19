# Ports collection makefile for:  pear-Math_Fraction
# Date created:			  05 August 2007
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Math_Fraction/Makefile,v 1.3 2012/11/17 05:56:39 svnexp Exp $
#

PORTNAME=	Math_Fraction
PORTVERSION=	0.4.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Classes that represent and manipulate fractions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

CATEGORY=	Math
FILES=		Fraction.php FractionOp.php

EXAMPLES=	using_fractionop.php
_EXAMPLESDIR=	docs/examples

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
