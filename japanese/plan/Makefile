# Created by: David O'Brien (obrien@cs.ucdavis.edu)
# $FreeBSD: japanese/plan/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	plan
PORTVERSION=	1.9
PORTREVISION=	2
CATEGORIES=	japanese

MAINTAINER=	ports@FreeBSD.org

MAKE_ENV+=	JAPANESE=yes

MASTERDIR=	${.CURDIR}/../../deskutils/plan

PLIST=	${WRKDIR}/PLIST
EXTRA_PATCHES=	${.CURDIR}/files/patch-*

NO_STAGE=	yes
post-build:
.if !defined(NOPORTDOCS)
	${ECHO_CMD} ${DOCSDIR:S|${PREFIX}/||}/plan_calEUC.ps > ${WRKDIR}/PLIST
.endif
	${CAT} ${MASTERDIR}/pkg-plist >> ${WRKDIR}/PLIST

post-install:
	@${MKDIR} ${DATADIR}/netplan.dir
	${CHMOD} 1777 ${DATADIR}/netplan.dir

.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${.CURDIR}/files/plan_calEUC.ps ${DOCSDIR}
.endif

.include	"${MASTERDIR}/Makefile"
