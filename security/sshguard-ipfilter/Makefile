# Created by: Mij <mij@bitchx.it>
# $FreeBSD: security/sshguard-ipfilter/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	-ipfilter
CONFLICTS=	sshguard-1.* sshguard-ipfw-1.* sshguard-pf-1.*

COMMENT=        Protect hosts from brute force attacks against ssh and other services using ipfilter

SSHGUARDFW=	ipfilter
MASTERDIR=	${.CURDIR}/../sshguard

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
