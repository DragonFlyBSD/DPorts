# Ports collection makefile for:  pear-HTML_Page2
# Date created:			  21 January 2005
# Whom:				  Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
#
# $FreeBSD: ports/devel/pear-HTML_Page2/Makefile,v 1.9 2012/11/17 05:56:38 svnexp Exp $
#

PORTNAME=	HTML_Page2
PORTVERSION=	0.6.1
CATEGORIES=	devel www pear
DISTNAME=	${PORTNAME}-${PORTVERSION}beta

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR base class for XHTML page generation

BUILD_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common
RUN_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
