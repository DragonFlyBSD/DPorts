# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: devel/svntrac/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	svntrac
PORTREVISION=	4
CATEGORIES=	devel

COMMENT=	Web-Based Bug And Patch-Set Tracking System For Subversion

RUN_DEPENDS=	subversion>=0:${PORTSDIR}/devel/subversion

MASTERDIR=	${.CURDIR}/../cvstrac
MAKE_ARGS=	APPNAME=svntrac
PKGMESSAGE=	${.CURDIR}/pkg-message

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
