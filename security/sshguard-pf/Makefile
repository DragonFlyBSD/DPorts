# Created by: Mij <mij@bitchx.it>
# $FreeBSD: security/sshguard-pf/Makefile 327769 2013-09-20 22:55:24Z bapt $

PKGNAMESUFFIX=	-pf

COMMENT=	Protect hosts from brute force attacks against ssh and other services using pf

CONFLICTS=	sshguard-1.* sshguard-ipfilter-1.* sshguard-ipfw-1.*

SSHGUARDFW=	pf
MASTERDIR=	${.CURDIR}/../sshguard

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
