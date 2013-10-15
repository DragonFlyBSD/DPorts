# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: net/pear-Horde_Ldap/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Horde_Ldap
PORTVERSION=	2.0.1
CATEGORIES=	net www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde LDAP libraries

USE_PHP=	ldap
USE_HORDE_RUN=	Horde_Exception \
		Horde_Util

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
