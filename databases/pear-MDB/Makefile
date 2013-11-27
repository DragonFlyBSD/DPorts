# Created by: Oleg Sharoiko <os@rsu.ru>
# $FreeBSD: databases/pear-MDB/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	MDB
PORTVERSION=	1.3.0
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR unified API for DB access, based on user meta data

BUILD_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	${PEARDIR}/XML/Parser.php:${PORTSDIR}/devel/pear-XML_Parser

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
