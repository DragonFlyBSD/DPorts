# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: devel/gittrac/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gittrac
CATEGORIES=	devel

COMMENT=	Web-Based Bug And Patch-Set Tracking System For Git

RUN_DEPENDS=	git>=0:${PORTSDIR}/devel/git

MASTERDIR=	${.CURDIR}/../cvstrac
MAKE_ARGS=	APPNAME=gittrac
PKGMESSAGE=	${.CURDIR}/pkg-message

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
