# Created by: Mij <mij@bitchx.it>
# $FreeBSD: security/sshguard-pf/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	-pf

COMMENT=	Protect hosts from brute force attacks against ssh and other services using pf

CONFLICTS=	sshguard-1.* sshguard-ipfilter-1.* sshguard-ipfw-1.*

SSHGUARDFW=	pf
MASTERDIR=	${.CURDIR}/../sshguard

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
