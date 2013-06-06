# Created by: Lewis Thompson <purple@lewiz.net>
# $FreeBSD: devel/pear-HTML_BBCodeParser/Makefile 318051 2013-05-13 09:52:59Z miwi $

PORTNAME=	HTML_BBCodeParser
PORTVERSION=	1.1
CATEGORIES=	devel www pear

MAINTAINER=	lewiz@compsoc.man.ac.uk
COMMENT=	Parser to replace UBB style tags with their HTML equivalents

BUILD_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common
RUN_DEPENDS=	${PEARDIR}/HTML/Common.php:${PORTSDIR}/devel/pear-HTML_Common

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
