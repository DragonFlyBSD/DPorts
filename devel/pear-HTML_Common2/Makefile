# Ports collection makefile for:  pear-HTML_Common2
# Date created:			  27 December 2006
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-HTML_Common2/Makefile,v 1.5 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	HTML_Common2
PORTVERSION=	2.1.0
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::HTML_Common2 is a base class for other HTML classes

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
