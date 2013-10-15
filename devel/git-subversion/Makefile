# $FreeBSD: devel/git-subversion/Makefile 327723 2013-09-20 17:04:43Z bapt $

PKGNAMESUFFIX=	-subversion

COMMENT=	Distributed source code management tool with FreeBSD subversion bindings

MASTERDIR=	${.CURDIR}/../git

DESCR=		${.CURDIR}/pkg-descr

WITH_SVN=	yes

CONFLICTS?=	git-[0-9]*

DISTINFO_FILE=	${MASTERDIR}/distinfo

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
