# Ports collection makefile for:  pear-Testing_Selenium
# Date created:			  15 December 2007
# Whom:				  Martin Wilke (miwi@FreeBSD.org)
#
# $FreeBSD: ports/devel/pear-Testing_Selenium/Makefile,v 1.5 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	Testing_Selenium
PORTVERSION=	0.4.4
CATEGORIES=	devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Binding - Once more unto the breach

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
