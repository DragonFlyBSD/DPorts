# Created by: rflynn@acsalaska.net
# $FreeBSD: ports/net/nss-pam-ldapd-sasl/Makefile,v 1.4 2013/01/25 05:46:24 svnexp Exp $

PORTNAME=		nss-pam-ldapd
PKGNAMESUFFIX=		-sasl

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Advanced fork of nss_ldap with sasl support

LICENSE=		# pet portlint

OPTIONS_SET+=	SASL

SLAVE_PORT=		sasl # In case we come up with more
MASTERDIR=		${.CURDIR}/../nss-pam-ldapd

.include "${MASTERDIR}/Makefile"
