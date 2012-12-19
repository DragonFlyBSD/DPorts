# Ports collection makefile for:  pear-Net_LDAP2
# Date created:			  04 May 2004
# Whom:				  Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/net/pear-Net_LDAP2/Makefile,v 1.31 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_LDAP2
PORTVERSION=	2.0.12
PORTEPOCH=	1
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	OO interface for searching and manipulating LDAP-entries

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	ldap

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
