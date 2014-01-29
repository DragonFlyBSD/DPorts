# Created by: Mij <mij@bitchx.it>
# $FreeBSD: security/sshguard-ipfw/Makefile 340722 2014-01-22 17:00:46Z mat $

PKGNAMESUFFIX=	-ipfw

COMMENT=	Protect hosts from brute force attacks against ssh and other services using ipfw

CONFLICTS=	sshguard-1.* sshguard-ipfilter-1.* sshguard-pf-1.*

SSHGUARDFW=	ipfw
MASTERDIR=	${.CURDIR}/../sshguard

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
