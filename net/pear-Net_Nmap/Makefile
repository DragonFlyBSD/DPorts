# Created by: Wen Heping<wenheping@gmail.com>
# $FreeBSD: net/pear-Net_Nmap/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net_Nmap
PORTVERSION=	1.0.4
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A Simple Wrapper Class for the Nmap Utility

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS:=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
