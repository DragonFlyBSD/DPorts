# New ports collection makefile for:	svntrac
# Date created:			13 May 2008
# Whom:				Greg Larkin <glarkin@FreeBSD.org>
#
# $FreeBSD: ports/devel/svntrac/Makefile,v 1.7 2012/11/17 05:57:04 svnexp Exp $
#

PORTNAME=	svntrac
PORTREVISION=	4
CATEGORIES=	devel

COMMENT=	Web-Based Bug And Patch-Set Tracking System For Subversion

RUN_DEPENDS=	subversion>=0:${PORTSDIR}/devel/subversion

MASTERDIR=	${.CURDIR}/../cvstrac
MAKE_ARGS=	APPNAME=svntrac
PKGMESSAGE=	${.CURDIR}/pkg-message

.include "${MASTERDIR}/Makefile"
