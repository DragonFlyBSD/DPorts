# Created by: Gerrit Beine (<gerrit.beine@gmx.de>)
# $FreeBSD: ports/devel/pear-HTML_QuickForm2/Makefile,v 1.16 2013/02/04 08:41:20 svnexp Exp $

PORTNAME=	HTML_QuickForm2
PORTVERSION=	0.6.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP5 rewrite of the HTML_QuickForm package

BUILD_DEPENDS=	${PEARDIR}/HTML/Common2.php:${PORTSDIR}/devel/pear-HTML_Common2
RUN_DEPENDS:=	${PEARDIR}/HTML/Common2.php:${PORTSDIR}/devel/pear-HTML_Common2

DEFAULT_PHP_VER=5
IGNORE_WITH_PHP=4

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
