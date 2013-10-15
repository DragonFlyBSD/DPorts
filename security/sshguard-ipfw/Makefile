# Created by: Mij <mij@bitchx.it>
# $FreeBSD: security/sshguard-ipfw/Makefile 327769 2013-09-20 22:55:24Z bapt $

PKGNAMESUFFIX=	-ipfw

COMMENT=	Protect hosts from brute force attacks against ssh and other services using ipfw

CONFLICTS=	sshguard-1.* sshguard-ipfilter-1.* sshguard-pf-1.*

SSHGUARDFW=	ipfw
MASTERDIR=	${.CURDIR}/../sshguard

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
