# Created by: Michael Schout <mschout@gkg.net>
# $FreeBSD: devel/pear-HTML_Select/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	HTML_Select
PORTVERSION=	1.3.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::HTML_Select is a class for generating HTML form select elements

BUILD_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common
RUN_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common

PEAR_AUTOINSTALL=	YES

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
