# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: net/pear-Net_LDAP/Makefile 319668 2013-06-02 15:01:14Z miwi $

PORTNAME=	Net_LDAP
DISTVERSION=	1.1.5
PORTREVISION=	1
CATEGORIES=	net pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	OO interface for searching and manipulating LDAP-entries

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
