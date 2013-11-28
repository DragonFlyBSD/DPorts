# Created by: Wen heping <wenheping@gmail.com>
# $FreeBSD: databases/pear-DB_ldap2/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	DB_ldap2
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	databases net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR DB compliant interface to LDAP v2 and v3 database

BUILD_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB
RUN_DEPENDS=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB

USE_PHP=	ldap
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
