# Created by: rflynn@acsalaska.net
# $FreeBSD: net/nss-pam-ldapd-sasl/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nss-pam-ldapd
PKGNAMESUFFIX=	-sasl

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Advanced fork of nss_ldap with sasl support

LICENSE=	# pet portlint

OPTIONS_SET+=	SASL

SLAVE_PORT=	sasl # In case we come up with more
MASTERDIR=	${.CURDIR}/../nss-pam-ldapd

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
