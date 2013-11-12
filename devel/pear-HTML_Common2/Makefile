# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: devel/pear-HTML_Common2/Makefile 333263 2013-11-08 21:41:53Z antoine $

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
