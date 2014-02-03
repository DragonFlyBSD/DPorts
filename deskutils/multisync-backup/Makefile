# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: deskutils/multisync-backup/Makefile 342291 2014-02-02 13:47:56Z antoine $

PORTNAME=	multisync-backup

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multisync backup plugin

RUN_DEPENDS=	multisync:${PORTSDIR}/deskutils/multisync

DISTINFO_FILE=	${MASTERDIR}/distinfo
PATCHDIR=	${.CURDIR}/files
PLIST=		${.CURDIR}/pkg-plist

WRKSRC=		${WRKDIR}/multisync-${PORTVERSION}/plugins/backup_plugin

MASTERDIR=	${.CURDIR}/../multisync

.include "${MASTERDIR}/Makefile"
