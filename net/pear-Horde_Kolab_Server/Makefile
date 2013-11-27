# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: net/pear-Horde_Kolab_Server/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Horde_Kolab_Server
PORTVERSION=	2.0.1
CATEGORIES=	net www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde library for manipulating the Kolab user database

USE_PHP=	hash
USE_HORDE_RUN=	Horde_Auth \
		Horde_Exception

OPTIONS_DEFAULT=	LDAP
OPTIONS_DEFINE=		LDAP
LDAP_DESC=		Enable LDAP support

# Not required but we want it
USE_HORDE_RUN+=	Horde_Date

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MLDAP}
USE_HORDE_RUN+=	Horde_Ldap
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
