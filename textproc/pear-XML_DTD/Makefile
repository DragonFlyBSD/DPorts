# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: textproc/pear-XML_DTD/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML_DTD
PORTVERSION=	0.5.2
CATEGORIES=	textproc devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Parsing of DTD files and DTD validation of XML files

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

USE_DOS2UNIX=	yes
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
