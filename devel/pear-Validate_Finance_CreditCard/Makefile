# Ports collection makefile for:  pear-Validate_Finance_CreditCard
# Date created:			  8 November 2006
# Whom:				  Anish Mistry (<amistry@am-productions.biz>)
#
# $FreeBSD: ports/devel/pear-Validate_Finance_CreditCard/Makefile,v 1.5 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	Validate_Finance_CreditCard
PORTVERSION=	0.5.3
CATEGORIES=	devel www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR CreditCard Validation class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Validate/Finance/CreditCard.php

TESTS=		credit_card.phpt

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
