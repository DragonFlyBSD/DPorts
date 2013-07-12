# New ports collection makefile for:	multisync-syncml
# Date created:			25 Nov 2003
# Whom:				Pav Lucistnik <pav@FreeBSD.org>
#
# $FreeBSD: deskutils/multisync-syncml/Makefile 322581 2013-07-09 21:26:48Z pav $

PORTNAME=	multisync-syncml

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multisync plugin for SyncML targets

RUN_DEPENDS=	multisync:${PORTSDIR}/deskutils/multisync

DISTINFO_FILE=	${MASTERDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

WRKSRC=		${WRKDIR}/multisync-${PORTVERSION}/plugins/syncml_plugin

MASTERDIR=	${.CURDIR}/../multisync

.include "${MASTERDIR}/Makefile"
