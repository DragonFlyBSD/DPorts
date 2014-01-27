# Created by: Wen Heping<wenheping@gmail.com>
# $FreeBSD: net/pear-Net_Nmap/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Net_Nmap
PORTVERSION=	1.0.4
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A Simple Wrapper Class for the Nmap Utility

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS:=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
