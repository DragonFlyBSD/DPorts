# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: devel/pear-Console_Table/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Console_Table
PORTVERSION=	1.1.4
CATEGORIES=	devel pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP class that makes it easy to build console style tables

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
