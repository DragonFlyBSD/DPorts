# Ports collection makefile for:  pear-Validate_US
# Date created:			  Oct 11, 2010
# Whom:				  Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Validate_US/Makefile,v 1.3 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	Validate_US
PORTVERSION=	0.5.5
CATEGORIES=	devel www pear

MAINTAINER=	wen@FreeBSD.org
COMMENT=	PEAR data validation class for US

BUILD_DEPENDS=	pear-Validate>=0.5.0:${PORTSDIR}/devel/pear-Validate
RUN_DEPENDS=	pear-Validate>=0.5.0:${PORTSDIR}/devel/pear-Validate

FILES=		Validate/US.php
TESTS=		validate_US.phpt validate_functions.inc

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
